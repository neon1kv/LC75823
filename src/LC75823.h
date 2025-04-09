#pragma once
#include <Arduino.h>
enum _animations
{
  WAITING,
};

class LC75823
{
public:
  LC75823(int CLK, int DIN, int CS, int totalDigits = 8);
  void begin();
  void ClearBuffer();
  void showScreen();
  void print(const wchar_t *txt, int startCursor);
  void scrollText(const wchar_t *txt, const int totalCells, int delayMs = 300);
  void send_control_bits();
  void send_ccb();
  byte allOn();
  byte allOff();

  // void animation(_animations anim, int pos);

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

  int getDigit(int charNum);
  int getScroll() { return scroll; }
  int getLen() { return _len; }

private:
  int calculateTextLength(const wchar_t *txt);
  void displayText(const wchar_t *txt, int len);
  void updateScrollPosition(int len, int totalCells);
  unsigned long t1 = 0;
  unsigned long t2 = 0;
  bool isTimeToUpdate(unsigned long &lastUpdate, int delayMs);
  byte screenarr[10][2];
  int _CS;
  int _CLK;
  int _DIN;
  int _totalDigits;
  int _len;
  int scroll;
  int digitPos;
  // int _scrollTextTim;

  int _scrollCorrect;
  void printLatSymbols(const wchar_t chr, int pos = 0);
  void printCyrSymbols(const wchar_t chr, int pos = 0);
};
