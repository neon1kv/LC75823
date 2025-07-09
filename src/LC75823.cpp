#include <LC75823.h>
#include <SPI.h>
#include <Segments.h>
#include <Symbols.h>
Button button(2);
LC75823::LC75823(int CLK, int DIN, int CS, int totalDigits = 8)
{
  _totalDigits = totalDigits;
  _CS = CS;
}

void LC75823::begin() // inicialize SPI and send clear buffer
{
  pinMode(_CS, OUTPUT);
  SPI.begin();
  SPCR = (0 << SPIE) | (1 << SPE) | (1 << DORD) | (1 << MSTR) | (0 << CPOL) | (0 << CPHA) | (1 << SPR1) | (1 << SPR0);
  SPSR = (0 << SPI2X);
  ClearBuffer();
  showScreen();
}

void LC75823::ClearBuffer() // Clear screenBuffer
{
  for (int i = 0; i < 20; i++)
  {
    screenBuffer[i] = 0B00000000;
  }
}

void LC75823::showScreen() // Send screenBuffer
{
  sendCBB();
  for (int i = 0; i < 20; i++)
  {
    SPI.transfer(screenBuffer[i]);
  }

  sendControlBits();
  ClearBuffer();
}

void LC75823::print(const wchar_t *txt, int startCursor)
{
  int i = 0;
  while (txt[i] != '\0')
  {
    printCyrSymbols(txt[i], startCursor + i + 1);
    i++;
  }
}

void LC75823::scrollText(const wchar_t *txt, const int totalCells = 8, int delayMs = 300)
{
  //_scrollTextTim = delayMs;
  if (isTimeToUpdate(t1, delayMs))
  {
    int len = calculateTextLength(txt); // Подсчет длины текста

    displayText(txt, len);                 // Отображение текста
    updateScrollPosition(len, totalCells); // Обновление позиции прокрутки
    showScreen();                          // Отображение на экране
    // Serial.println("timerrrrrrrrrrrrrrrrrrrrrrrr");
  }
}

void LC75823::sendControlBits() // Send control bits
{
  SPI.transfer(0x1F);
  digitalWrite(10, LOW);
}

byte LC75823::allOn() // All segments ON trugh SPI
{
  sendCBB();
  for (int i = 0; i < 156; i++)
  {
    SPI.transfer(0xFF);
  }
  sendControlBits();
  return 1;
}

byte LC75823::allOff() // All segments OFF trugh SPI
{
  sendCBB();
  for (int i = 0; i < 156; i++)
  {
    SPI.transfer(0x00);
  }

  sendControlBits();
  return 1;
}

void LC75823::sendCBB() // Send CCB address
{
  digitalWrite(10, LOW);
  SPI.transfer(0x41);
  digitalWrite(10, HIGH);
}

int LC75823::getDigit(int charNum)
{
  _scrollCorrect = charNum - _len;

  Serial.print("Scrollcorrect:");
  Serial.println(_scrollCorrect);

  return digitPos + charNum + 1;
}

bool LC75823::calibrate(const int delayMs, const bool prevSegment)
{
  // Обновляем состояние кнопки
  // byte screenBuffer[20] = {0}; // Массив для хранения данных
  button.tick();
  if (isTimeToUpdate(t3, delayMs))
  {

    for (int j = 1; j < 8; j++)
    {
      for (int k = 1; k < 14; k++)
      {
        Serial.print("press the button when you see the ");
        Serial.print(k);
        Serial.print(" segment of ");
        Serial.print(j);
        Serial.println(" digit");
        for (int i = 0; i < 20; i++)
        {
          if (isTimeToUpdate(t4, delayMs))
          {

            for (int b = 7; b >= 0; b--)
            {

              calibrationFillBuffer(i, b, prevSegment); // Обновляем массив
              // printDebugInfo(i, b);                     // Выводим отладочную информацию
              sendCalibrationBuffer(); // Отправляем данные на дисплей
              // delay(delayMs);          // Задержка
            }
          }
          if (i == 20)
          {
            return true;
          }
        }
        if (button.hasClicks())
          Serial.println("Button pressed!");
      }
    }
  }
}

// private functions

int LC75823::calculateTextLength(const wchar_t *txt)
{
  int len = 0;
  while (txt[len] != L'\0')
    len++;
  return len;
}

void LC75823::updateScrollPosition(int len, int totalCells)
{
  scroll--;
  if (abs(scroll) > len + _scrollCorrect)
  {
    scroll = totalCells;
  }
  digitPos = scroll;
  _len = len;
}

void LC75823::displayText(const wchar_t *txt, int len)
{
  for (int i = 0; i < len; i++)
  {
    printCyrSymbols(txt[i], i + 1 + scroll);
    printLatSymbols(txt[i], i + 1 + scroll);
  }
}

bool LC75823::isTimeToUpdate(unsigned long &lastUpdate, int delayMs)
{
  unsigned long now = millis();
  if (now - lastUpdate > delayMs)
  {
    lastUpdate = now;
    return true;
  }
  return false;
}

void LC75823::calibrationFillBuffer(int i, int b, const bool prevSegment = false)
{
  screenBuffer[i] |= (1 << b); // Устанавливаем бит

  if (prevSegment == true)
  {
    if (b == 7)
    {
      int targetI = (i == 0) ? 19 : i - 1; // Если i == 0, то устанавливаем бит в 19 строке в 0
      screenBuffer[targetI] &= ~(1 << 0);  // Сбрасываем бит
    }
    else
    {
      screenBuffer[i] &= ~(1 << (b + 1)); // Сбрасываем следующий бит
    }
  }
}

void LC75823::sendCalibrationBuffer()
{
  sendCBB();
  for (int i = 0; i < 20; i++)
  {
    SPI.transfer(screenBuffer[i]); // Отправляем данные на дисплей
  }

  sendControlBits();
}

void LC75823::printDebugInfo(int i, int b)
{
  Serial.println("");
  Serial.print("i: ");
  Serial.println(i);
  Serial.print("b: ");
  Serial.println(b);
  Serial.print("screenBuffer[");
  Serial.print(i);
  Serial.print("] = 0B");

  for (int n = 7; n >= 0; n--)
  {
    Serial.print(bitRead(screenBuffer[i], n));
  }

  Serial.println("");
}
