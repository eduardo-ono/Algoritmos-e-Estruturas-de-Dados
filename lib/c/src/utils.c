#include <stdlib.h>
#include "../include/utils.h"

// Função para limpar a tela de saída
void clrscr() {
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
