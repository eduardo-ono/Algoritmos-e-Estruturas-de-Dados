#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <unistd.h>

#include "util.h"

// Função para limpar a tela de saída
void clrscr()
{
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
#endif
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}

void delay(int milisegundos)
{
    usleep(1000 * milisegundos);
}

void gotoxy(int x, int y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(hStdout, position);
}

void hideCursor(bool flag)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 10;
    info.bVisible = flag ? FALSE : TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

COORD getCursorXY()
{
    COORD pos;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
    {
        pos.X = csbi.dwCursorPosition.X;
        pos.Y = csbi.dwCursorPosition.Y;
    }
    return pos;
}
