#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // toupper()

#include "menu.h"

char exibirMenu(char *menu[], const int N)
{
    char opcao, opcoes[N], entrada[100];
    int i, maxStrSize;
    bool opcaoOk;

    // Determina o tamanho da maior string
    maxStrSize = strlen(menu[0]);
    for (i = 1; i < N; i++)
        if (strlen(menu[i]) > maxStrSize)
            maxStrSize = strlen(menu[i]);

    // Extrai as opções na posição 1 das strings e converte para maiuscula
    for (i = 0; i < N; i++)
    {
        opcao = menu[i][1];
        if ((opcao < '0' || opcao > '9') && (opcao < 'A' || opcao > 'Z') && (opcao < 'a' || opcao > 'z') )
            return 'X';
        opcoes[i] = toupper(opcao);
    }

    do
    {
        // Imprime o MENU DE OPÇÕES
        printf("\nMENU DE OP%c%cES\n", 128, 229);
        for (i = 0; i < maxStrSize; i++)
            putchar(205); // '='
        putchar('\n');
        for (i = 0; i < N; i++)
            printf("%s\n", menu[i]);
        for (i = 0; i < maxStrSize; i++)
            putchar(196); // '-'
        putchar('\n');
        printf("Op%c%co: ", 135, 198);
        gets(entrada);
        putchar('\n');
        opcao = toupper(entrada[0]);
        for (opcaoOk = false, i = 0; i < N && !opcaoOk; i++)
            if (opcao == opcoes[i])
                opcaoOk = true;
        if (!opcaoOk)
            printf("--> Op%c%co inv%clida!\n", 135, 198, 160);
    } while (opcaoOk == false);

    return opcao;
}
