#include <LC75823.h>
#include <SPI.h>
#include <Segments.h>
#include <Symbols.h>

LC75823::LC75823(int CLK, int DIN, int CS, int totalDigits = 8)
{
  _totalDigits = totalDigits;

  _CS = CS;
}

void LC75823::begin()
{
  pinMode(_CS, OUTPUT);
  SPI.begin();
  SPCR = (0 << SPIE) | (1 << SPE) | (1 << DORD) | (1 << MSTR) | (0 << CPOL) | (0 << CPHA) | (1 << SPR1) | (1 << SPR0);
  SPSR = (0 << SPI2X);
  ClearBuffer();
  showScreen();
}

byte LC75823::allOn()
{
  send_ccb();
  for (int i = 0; i < 156; i++)
  {
    SPI.transfer(0xFF);
  }
  send_control_bits();
  return 1;
}

byte LC75823::allOff()
{
  send_ccb();
  for (int i = 0; i < 156; i++)
  {
    SPI.transfer(0x00);
  }

  send_control_bits();
  return 1;
}

void LC75823::showScreen()
{
  send_ccb();
  for (int n = 0; n < 10; n++)
  {
    for (int i = 0; i < 2; i++)
    {
      SPI.transfer(screenarr[n][i]);
    }
  }
  send_control_bits();
  ClearBuffer();
}

void LC75823::ClearBuffer()
{
  for (int n = 0; n < 10; n++)
  {
    for (int i = 0; i < 2; i++)
    {
      screenarr[n][i] = 0B00000000;
    }
  }
}

void LC75823::send_ccb()
{
  digitalWrite(10, LOW);
  SPI.transfer(0x41);
  digitalWrite(10, HIGH);
}

void LC75823::send_control_bits()
{
  SPI.transfer(0x1F);
  digitalWrite(10, LOW);
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
    int len = calculateTextLength(txt);    // Подсчет длины текста
    displayText(txt, len);                 // Отображение текста
    updateScrollPosition(len, totalCells); // Обновление позиции прокрутки
    showScreen();                          // Отображение на экране
    // Serial.println("timerrrrrrrrrrrrrrrrrrrrrrrr");
  }
}

int LC75823::calculateTextLength(const wchar_t *txt)
{
  int len = 0;
  while (txt[len] != L'\0')
    len++;
  return len;
}

void LC75823::displayText(const wchar_t *txt, int len)
{
  for (int i = 0; i < len; i++)
  {
    printCyrSymbols(txt[i], i + 1 + scroll);
    printLatSymbols(txt[i], i + 1 + scroll);
  }
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

int LC75823::getDigit(int charNum)
{

  _scrollCorrect = charNum - _len;
  Serial.print("Scrollcorrect:");
  Serial.println(_scrollCorrect);
  return digitPos + charNum + 1;
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
