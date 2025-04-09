#include <LC75823.h>

void LC75823::printCyrSymbols(const wchar_t chr, int pos = 0)
{
  switch (chr)
  {
  case 1040: // а

    segmentB(pos);
    segmentC(pos);
    segmentM(pos);
    segmentJ(pos);
    segmentG2(pos);

    break;

  case 1041: // б
    segmentA(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);
    break;

  case 1042: // в
    segmentA(pos);
    segmentJ(pos);
    segmentK(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);
    segmentG1(pos);
    break;

  case 1043: // г
    segmentA(pos);
    segmentE(pos);
    segmentF(pos);
    break;

  case 1044: // д
    segmentJ(pos);
    segmentB(pos);
    segmentG2(pos);
    segmentG1(pos);
    segmentC(pos);
    segmentE(pos);
    break;

  case 1045: // е
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);
    segmentG1(pos);
    segmentG2(pos);
    break;

  case 1046: // ж
    segmentH(pos);
    segmentI(pos);
    segmentJ(pos);
    segmentM(pos);
    segmentL(pos);
    segmentK(pos);
    break;

  case 1047: // з
    segmentA(pos);
    segmentJ(pos);
    segmentG1(pos);
    segmentK(pos);
    segmentD(pos);
    break;

  case 1048: // и
    segmentF(pos);
    segmentE(pos);
    segmentM(pos);
    segmentJ(pos);
    segmentC(pos);
    segmentB(pos);
    break;

  case 1049: // й
    segmentF(pos);
    segmentE(pos);
    segmentM(pos);
    segmentJ(pos);
    segmentC(pos);
    segmentB(pos);
    segmentI(pos);

    break;

  case 1050: // к
    segmentF(pos);
    segmentE(pos);
    segmentG1(pos);
    segmentJ(pos);
    segmentK(pos);

    break;

  case 1051: // л
    segmentB(pos);
    segmentC(pos);
    segmentJ(pos);
    segmentM(pos);

    break;

  case 1052: // м
    segmentE(pos);
    segmentF(pos);
    segmentH(pos);
    segmentJ(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case 1053: // н
    segmentF(pos);
    segmentE(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case 1054: // о
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);

    break;

  case 1055: // п
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentE(pos);
    segmentF(pos);

    break;

  case 1056: // р
    segmentA(pos);
    segmentJ(pos);
    segmentG1(pos);
    segmentF(pos);
    segmentE(pos);

    break;

  case 1057: // с
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);

    break;

  case 1058: // т
    segmentA(pos);
    segmentI(pos);
    segmentL(pos);

    break;

  case 1059: // у
    segmentH(pos);
    segmentJ(pos);
    segmentM(pos);

    break;

  case 1060: // ф
    segmentA(pos);
    segmentF(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentL(pos);
    segmentI(pos);

    break;

  case 1061: // х
    segmentH(pos);
    segmentJ(pos);
    segmentM(pos);
    segmentK(pos);

    break;

  case 1062: // ц
    segmentF(pos);
    segmentI(pos);
    segmentE(pos);
    segmentL(pos);
    segmentD(pos);

    break;

  case 1063: // ч
    segmentI(pos);
    segmentB(pos);
    segmentG2(pos);
    segmentC(pos);

    break;

  case 1064: // ш
    segmentF(pos);
    segmentI(pos);
    segmentB(pos);
    segmentE(pos);
    segmentL(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case 1065: // щ
    segmentF(pos);
    segmentI(pos);
    segmentB(pos);
    segmentE(pos);
    segmentL(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case 1066: // ъ
    segmentF(pos);
    segmentG1(pos);
    segmentM(pos);
    segmentE(pos);

    break;

  case 1067: // ы
    segmentF(pos);
    segmentG1(pos);
    segmentM(pos);
    segmentE(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case 1068: // ь
    segmentF(pos);
    segmentG1(pos);
    segmentM(pos);
    segmentE(pos);

    break;

  case 1069: // э
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentG2(pos);

    break;

  case 1070: // ю
    segmentF(pos);
    segmentE(pos);
    segmentG1(pos);
    segmentJ(pos);
    segmentK(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case 1071: // я
    segmentA(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentF(pos);
    segmentM(pos);
    segmentC(pos);

    break;
  }
}
void LC75823::printLatSymbols(const wchar_t chr, int pos = 0)
{
  switch (chr)
  {
  case 'a':
    segmentB(pos);
    segmentC(pos);
    segmentM(pos);
    segmentJ(pos);
    segmentG2(pos);

    break;

  case 'b':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentI(pos);
    segmentL(pos);
    segmentG2(pos);
    break;

  case 'c':
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);

    break;

  case 'd':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentI(pos);
    segmentL(pos);

    break;

  case 'e':
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;

  case 'f':
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;

  case 'g':
    segmentA(pos);
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);
    segmentC(pos);
    segmentG2(pos);

    break;

  case 'h':
    segmentF(pos);
    segmentE(pos);
    segmentB(pos);
    segmentC(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;

  case 'i':
    segmentA(pos);
    segmentI(pos);
    segmentL(pos);
    segmentD(pos);

    break;

  case 'j':
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);

    break;

  case 'k':
    segmentF(pos);
    segmentE(pos);
    segmentG1(pos);
    segmentJ(pos);
    segmentK(pos);

    break;

  case 'l':
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);

    break;

  case 'm':
    segmentE(pos);
    segmentF(pos);
    segmentH(pos);
    segmentJ(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case 'n':
    segmentE(pos);
    segmentF(pos);
    segmentH(pos);
    segmentK(pos);
    segmentC(pos);
    segmentB(pos);

    break;

  case 'o':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);

    break;

  case 'p':
    segmentA(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentF(pos);
    segmentE(pos);

    break;

  case 'q':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentK(pos);
    segmentE(pos);
    segmentF(pos);

    break;

  case 'r':
    segmentA(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentE(pos);
    segmentF(pos);
    segmentK(pos);

    break;

  case 's':
    segmentA(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case 't':
    segmentA(pos);
    segmentI(pos);
    segmentL(pos);

    break;

  case 'u':
    segmentF(pos);
    segmentE(pos);
    segmentD(pos);
    segmentC(pos);
    segmentB(pos);

    break;

  case 'v':
    segmentF(pos);
    segmentE(pos);
    segmentM(pos);
    segmentJ(pos);

    break;

  case 'w':
    segmentF(pos);
    segmentE(pos);
    segmentM(pos);
    segmentK(pos);
    segmentC(pos);
    segmentB(pos);

    break;

  case 'x':
    segmentH(pos);
    segmentJ(pos);
    segmentM(pos);
    segmentK(pos);

    break;

  case 'y':
    segmentH(pos);
    segmentJ(pos);
    segmentL(pos);

    break;

  case 'z':
    segmentA(pos);
    segmentJ(pos);
    segmentM(pos);
    segmentD(pos);

    break;

  case '1':
    segmentJ(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case '2':
    segmentA(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentE(pos);
    segmentD(pos);

    break;

  case '3':
    segmentA(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case '4':
    segmentF(pos);
    segmentB(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentC(pos);

    break;

  case '5':
    segmentA(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case '6':
    segmentA(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);
    segmentE(pos);
    segmentC(pos);
    segmentD(pos);

    break;

  case '7':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);

    break;

  case '8':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;

  case '9':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentF(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;

  case '0':
    segmentA(pos);
    segmentB(pos);
    segmentC(pos);
    segmentD(pos);
    segmentE(pos);
    segmentF(pos);

    break;
  case '+':
    segmentI(pos);
    segmentL(pos);
    segmentG1(pos);
    segmentG2(pos);
    break;
  case '-':
    segmentG1(pos);
    segmentG2(pos);

    break;
  case '/':
    segmentJ(pos);
    segmentM(pos);

    break;
  case '(':
    segmentJ(pos);
    segmentK(pos);

    break;
  case ')':
    segmentH(pos);
    segmentM(pos);

    break;

  case '_':
    segmentD(pos);
    break;
  case '*':
    segmentH(pos);
    segmentI(pos);
    segmentJ(pos);
    segmentM(pos);
    segmentK(pos);
    segmentL(pos);
    segmentG1(pos);
    segmentG2(pos);

    break;
  case '<':
    segmentJ(pos);
    segmentB(pos);
    segmentG2(pos);
    segmentK(pos);
    segmentC(pos);

    break;
  case '>':
    segmentF(pos);
    segmentH(pos);
    segmentG1(pos);
    segmentE(pos);
    segmentM(pos);
    break;
  case '%':
    segmentJ(pos);
    segmentM(pos);
    segmentH(pos);
    segmentG1(pos);
    segmentF(pos);
    segmentG2(pos);
    segmentK(pos);
    segmentC(pos);
    break;
  case '=':
    segmentA(pos);
    segmentG1(pos);
    segmentG2(pos);
    break;
  }
}
