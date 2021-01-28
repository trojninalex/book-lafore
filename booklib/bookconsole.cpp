#include "bookconsole.h"

static termios old, newT;

void initTermios(int echo) {
  tcgetattr(0, &old);
  newT = old;
  newT.c_lflag &= ~ICANON;
  if (echo) {
    newT.c_lflag |= ECHO;
  } else {
    newT.c_lflag &= ~ECHO;
  }

  tcsetattr(0, TCSANOW, &newT);
}

void resetTermios() {
  tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo) {
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

char getch() {
  return getch_(0);
}

char getche() {
  return getch_(1);
}
