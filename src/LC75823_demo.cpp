
#include <SPI.h>

#include <LC75823.h>


LC75823 disp(13, 11, 8);
void setup()
{
  Serial.begin(115200);
  disp.begin();
  disp.allOn();
  delay(1000);
  disp.allOff();
  disp.calibrate(500);
  disp.ClearBuffer();
  disp.showScreen();
  delay(500);
}

void loop()
{

  /*button.tick();
  if (button.hasClicks())
  {
    disp.allOn();
    delay(1000);
    disp.allOff();
    delay(1000);
  }
*/
  disp.scrollText(L"deorro - five more hours", 8, 250);
}
