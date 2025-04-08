#pragma once
#include <Arduino.h>

class LC75823 {
public:
  LC75823(int CLK, int DIN, int CS, int totalDigits = 8);
  void begin();
  void getClearScreen();
  void showScreen();
  void print(const wchar_t* txt, int startCursor);
  void scrollText(const wchar_t* txt, int totalCells, int delayMs = 300);
  void send_control_bits();
  void send_ccb();

  void segmentA(int digit_num);
  void segmentB(int digit_num);
  void segmentC(int digit_num);
  void segmentD(int digit_num);
  void segmentE(int digit_num);
  void segmentF(int digit_num);
  void segmentH(int digit_num);
  void segmentI(int digit_num);
  void segmentJ(int digit_num);
  void segmentG1(int digit_num);
  void segmentG2(int digit_num);
  void segmentM(int digit_num);
  void segmentL(int digit_num);
  void segmentK(int digit_num);

private:
  byte screenarr[10][2];

  int _CS;
  int _CLK;
  int _DIN;
  int _totalDigits;

  int scroll;

  void printLatSymbols(const wchar_t chr, int pos = 0);
  void printCyrSymbols(const wchar_t chr, int pos = 0);
};
