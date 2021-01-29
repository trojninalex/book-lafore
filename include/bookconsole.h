#ifndef _BOOKCONSOLE_H
#define _BOOKCONSOLE_H

#include <stdio.h>
#include <termios.h>


void initTermios(int echo);
void resetTermios();
char getch_(int echo);
char getch();
char getche();

#endif
