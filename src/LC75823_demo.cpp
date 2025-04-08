
#include <SPI.h>

#include <LC75823.h>
//#include <GyverOLED.h>
LC75823 disp(13,11,10);
void setup() {
  // put your setup code here, to run once:
disp.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
disp.scrollText(L"hello world", 8);
disp.showScreen();


//disp.send_ccb();
//for(int i=0; i<156;i++){
//SPI.transfer(0xFF);
//}


//disp.send_control_bits();
}
