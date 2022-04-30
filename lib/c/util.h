#include <stdbool.h>
#include <windows.h>

#ifndef TERMINAL_H
#define TERMINAL_H

void clrscr();
void delay(int);
void gotoxy(int, int);
void hideCursor(bool);
COORD getCursorXY();

#endif
