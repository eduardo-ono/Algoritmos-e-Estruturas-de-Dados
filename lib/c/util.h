#include <stdbool.h>
#include <windows.h>

#ifndef UTIL_H
#define UTIL_H

void clrscr();
char exibirMenu(char **, const int);
void delay(int);
void gotoxy(int, int);
void hideCursor(bool);
COORD getCursorXY();

#endif
