#include <LC75823.h>

void LC75823::segmentA(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B10000000;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B01000000;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00100000;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00010000;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00001000;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00000100;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00000010;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B00000001;
    break;
  }
}
void LC75823::segmentB(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B00100000;
    break;

  case 2:
    screenBuffer[1 * 2 + 2] |= 0B00010000;
    break;

  case 3:
    screenBuffer[2 * 2 + 2] |= 0B00001000;
    break;

  case 4:
    screenBuffer[3 * 2 + 2] |= 0B00000100;
    break;

  case 5:
    screenBuffer[4 * 2 + 2] |= 0B00000010;
    break;

  case 6:
    screenBuffer[5 * 2 + 2] |= 0B00000001;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B10000000;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B01000000;
    break;
  }
}
void LC75823::segmentC(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B01000000;
    break;

  case 2:
    screenBuffer[1 * 2 + 2] |= 0B00100000;
    break;

  case 3:
    screenBuffer[2 * 2 + 2] |= 0B00010000;
    break;

  case 4:
    screenBuffer[3 * 2 + 2] |= 0B00001000;
    break;

  case 5:
    screenBuffer[4 * 2 + 2] |= 0B00000100;
    break;

  case 6:
    screenBuffer[5 * 2 + 2] |= 0B00000010;
    break;

  case 7:
    screenBuffer[6 * 2 + 2] |= 0B00000001;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B10000000;
    break;
  }
}
void LC75823::segmentD(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00000001;
    break;

  case 2:
    screenBuffer[0 * 2 + 2] |= 0B10000000;
    break;

  case 3:
    screenBuffer[1 * 2 + 2] |= 0B01000000;
    break;

  case 4:
    screenBuffer[2 * 2 + 2] |= 0B00100000;
    break;

  case 5:
    screenBuffer[3 * 2 + 2] |= 0B00010000;
    break;

  case 6:
    screenBuffer[4 * 2 + 2] |= 0B00001000;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B00000100;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B00000010;
    break;
  }
}
void LC75823::segmentE(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00000100;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00000010;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00000001;
    break;

  case 4:
    screenBuffer[2 * 2 + 2] |= 0B10000000;
    break;

  case 5:
    screenBuffer[3 * 2 + 2] |= 0B01000000;
    break;

  case 6:
    screenBuffer[4 * 2 + 2] |= 0B00100000;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B00010000;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B00001000;
    break;
  }
}

void LC75823::segmentF(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00000010;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00000001;
    break;

  case 3:
    screenBuffer[1 * 2 + 2] |= 0B10000000;
    break;

  case 4:
    screenBuffer[2 * 2 + 2] |= 0B01000000;
    break;

  case 5:
    screenBuffer[3 * 2 + 2] |= 0B00100000;
    break;

  case 6:
    screenBuffer[4 * 2 + 2] |= 0B00010000;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B00001000;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B00000100;
    break;
  }
}
void LC75823::segmentG1(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00100000;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00010000;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00001000;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00000100;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00000010;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00000001;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B10000000;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B01000000;
    break;
  }
}
void LC75823::segmentG2(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B00001000;
    break;

  case 2:
    screenBuffer[1 * 2 + 2] |= 0B00000100;
    break;

  case 3:
    screenBuffer[2 * 2 + 2] |= 0B00000010;
    break;

  case 4:
    screenBuffer[3 * 2 + 2] |= 0B00000001;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B10000000;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B01000000;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00100000;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B00010000;
    break;
  }
}
void LC75823::segmentH(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00010000;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00001000;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00000100;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00000010;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00000001;
    break;

  case 6:
    screenBuffer[4 * 2 + 2] |= 0B10000000;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B01000000;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B00100000;
    break;
  }
}
void LC75823::segmentI(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B00000001;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B10000000;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B01000000;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00100000;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00010000;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00001000;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00000100;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B00000010;
    break;
  }
}
void LC75823::segmentJ(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B00000100;
    break;

  case 2:
    screenBuffer[1 * 2 + 2] |= 0B00000010;
    break;

  case 3:
    screenBuffer[2 * 2 + 2] |= 0B00000001;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B10000000;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B01000000;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00100000;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00010000;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B00001000;
    break;
  }
}
void LC75823::segmentM(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B00001000;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00000100;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00000010;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00000001;
    break;

  case 5:
    screenBuffer[3 * 2 + 2] |= 0B10000000;
    break;

  case 6:
    screenBuffer[4 * 2 + 2] |= 0B01000000;
    break;

  case 7:
    screenBuffer[5 * 2 + 2] |= 0B00100000;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B00010000;
    break;
  }
}
void LC75823::segmentL(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 1] |= 0B01000000;
    break;

  case 2:
    screenBuffer[1 * 2 + 1] |= 0B00100000;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B00010000;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B00001000;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00000100;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00000010;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00000001;
    break;

  case 8:
    screenBuffer[6 * 2 + 2] |= 0B10000000;
    break;
  }
}
void LC75823::segmentK(int digit_num)
{
  switch (digit_num)
  {
  case 1:
    screenBuffer[0 * 2 + 2] |= 0B00000010;
    break;

  case 2:
    screenBuffer[1 * 2 + 2] |= 0B00000001;
    break;

  case 3:
    screenBuffer[2 * 2 + 1] |= 0B10000000;
    break;

  case 4:
    screenBuffer[3 * 2 + 1] |= 0B01000000;
    break;

  case 5:
    screenBuffer[4 * 2 + 1] |= 0B00100000;
    break;

  case 6:
    screenBuffer[5 * 2 + 1] |= 0B00010000;
    break;

  case 7:
    screenBuffer[6 * 2 + 1] |= 0B00001000;
    break;

  case 8:
    screenBuffer[7 * 2 + 1] |= 0B00000100;
    break;
  }
}