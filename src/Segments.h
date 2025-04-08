#include <LC75823.h>

void LC75823::segmentA(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B10000000;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B01000000;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00100000;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00010000;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00001000;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00000100;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00000010;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B00000001;
      break;

  }
}
void LC75823::segmentB(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B00100000;
      break;

    case 2:
      screenarr [1][2] = screenarr [1][2] | 0B00010000;
      break;

    case 3:
      screenarr [2][2] = screenarr [2][2] | 0B00001000;
      break;

    case 4:
      screenarr [3][2] = screenarr [3][2] | 0B00000100;
      break;

    case 5:
      screenarr [4][2] = screenarr [4][2] | 0B00000010;
      break;

    case 6:
      screenarr [5][2] = screenarr [5][2] | 0B00000001;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B10000000;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B01000000;
      break;

  }
}
void LC75823::segmentC(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B01000000;
      break;

    case 2:
      screenarr [1][2] = screenarr [1][2] | 0B00100000;
      break;

    case 3:
      screenarr [2][2] = screenarr [2][2] | 0B00010000;
      break;

    case 4:
      screenarr [3][2] = screenarr [3][2] | 0B00001000;
      break;

    case 5:
      screenarr [4][2] = screenarr [4][2] | 0B00000100;
      break;

    case 6:
      screenarr [5][2] = screenarr [5][2] | 0B00000010;
      break;

    case 7:
      screenarr [6][2] = screenarr [6][2] | 0B00000001;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B10000000;
      break;
  }
}
void LC75823::segmentD(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00000001;
      break;

    case 2:
      screenarr [0][2] = screenarr [0][2] | 0B10000000;
      break;

    case 3:
      screenarr [1][2] = screenarr [1][2] | 0B01000000;
      break;

    case 4:
      screenarr [2][2] = screenarr [2][2] | 0B00100000;
      break;

    case 5:
      screenarr [3][2] = screenarr [3][2] | 0B00010000;
      break;

    case 6:
      screenarr [4][2] = screenarr [4][2] | 0B00001000;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B00000100;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B00000010;
      break;
  }
}
void LC75823::segmentE(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00000100;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00000010;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00000001;
      break;

    case 4:
      screenarr [2][2] = screenarr [2][2] | 0B10000000;
      break;

    case 5:
      screenarr [3][2] = screenarr [3][2] | 0B01000000;
      break;

    case 6:
      screenarr [4][2] = screenarr [4][2] | 0B00100000;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B00010000;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B00001000;
      break;
  }
}
void LC75823::segmentF(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00000010;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00000001;
      break;

    case 3:
      screenarr [1][2] = screenarr [1][2] | 0B10000000;
      break;

    case 4:
      screenarr [2][2] = screenarr [2][2] | 0B01000000;
      break;

    case 5:
      screenarr [3][2] = screenarr [3][2] | 0B00100000;
      break;

    case 6:
      screenarr [4][2] = screenarr [4][2] | 0B00010000;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B00001000;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B00000100;
      break;
  }
}
void LC75823::segmentG1(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00100000;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00010000;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00001000;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00000100;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00000010;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00000001;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B10000000;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B01000000;
      break;
  }
}
void LC75823::segmentG2(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B00001000;
      break;

    case 2:
      screenarr [1][2] = screenarr [1][2] | 0B00000100;
      break;

    case 3:
      screenarr [2][2] = screenarr [2][2] | 0B00000010;
      break;

    case 4:
      screenarr [3][2] = screenarr [3][2] | 0B00000001;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B10000000;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B01000000;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00100000;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B00010000;
      break;
  }
}
void LC75823::segmentH(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00010000;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00001000;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00000100;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00000010;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00000001;
      break;

    case 6:
      screenarr [4][2] = screenarr [4][2] | 0B10000000;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B01000000;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B00100000;
      break;
  }
}
void LC75823::segmentI(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B00000001;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B10000000;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B01000000;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00100000;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00010000;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00001000;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00000100;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B00000010;
      break;
  }
}
void LC75823::segmentJ(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B00000100;
      break;

    case 2:
      screenarr [1][2] = screenarr [1][2] | 0B00000010;
      break;

    case 3:
      screenarr [2][2] = screenarr [2][2] | 0B00000001;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B10000000;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B01000000;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00100000;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00010000;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B00001000;
      break;
  }

}
void LC75823::segmentM(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B00001000;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00000100;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00000010;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00000001;
      break;

    case 5:
      screenarr [3][2] = screenarr [3][2] | 0B10000000;
      break;

    case 6:
      screenarr [4][2] = screenarr [4][2] | 0B01000000;
      break;

    case 7:
      screenarr [5][2] = screenarr [5][2] | 0B00100000;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B00010000;
      break;
  }

}
void LC75823::segmentL(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][1] = screenarr [0][1] | 0B01000000;
      break;

    case 2:
      screenarr [1][1] = screenarr [1][1] | 0B00100000;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B00010000;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B00001000;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00000100;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00000010;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00000001;
      break;

    case 8:
      screenarr [6][2] = screenarr [6][2] | 0B10000000;
      break;
  }

}
void LC75823::segmentK(int digit_num) {
  switch (digit_num) {
    case 1:
      screenarr [0][2] = screenarr [0][2] | 0B00000010;
      break;

    case 2:
      screenarr [1][2] = screenarr [1][2] | 0B00000001;
      break;

    case 3:
      screenarr [2][1] = screenarr [2][1] | 0B10000000;
      break;

    case 4:
      screenarr [3][1] = screenarr [3][1] | 0B01000000;
      break;

    case 5:
      screenarr [4][1] = screenarr [4][1] | 0B00100000;
      break;

    case 6:
      screenarr [5][1] = screenarr [5][1] | 0B00010000;
      break;

    case 7:
      screenarr [6][1] = screenarr [6][1] | 0B00001000;
      break;

    case 8:
      screenarr [7][1] = screenarr [7][1] | 0B00000100;
      break;
  }

}