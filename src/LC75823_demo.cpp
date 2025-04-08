
#include <SPI.h>

#include <LC75823.h>

LC75823 disp(13, 11, 10);
void setup()
{
  Serial.begin(115200);
  disp.begin();
  disp.allOn();
  delay(1000);
  disp.allOff();
}

void loop()
{
  // put your main code here, to run repeatedly:
  disp.scrollText(L"hello world ", 8);
  Serial.print("Digit1Pos: ");
  Serial.println(disp.getDigit(1));
  Serial.print("getScroll: ");
  Serial.println(disp.getScroll());
  Serial.print("getLen: ");
  Serial.println(disp.getLen());

  disp.segmentA(disp.getDigit(12));
  disp.showScreen();

  // disp.send_ccb();
  // for(int i=0; i<156;i++){
  // SPI.transfer(0xFF);
  // }
  // disp.send_control_bits();
}
