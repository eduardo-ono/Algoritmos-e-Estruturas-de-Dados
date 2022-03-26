#include <stdlib.h>
#include <string.h>
#include <ctype.h> // toupper()

char exibirMenu(char *menu[], const int N)
{
    char opcao, opcoes[N], entrada[100];
    int i, opcaoOk, maxStrSize;

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

    do {
        // Imprime o Menu de Opcões
        printf("\nMENU DE OPCOES\n");
        for (i = 0; i < maxStrSize; i++)
            printf("%c", 205); // '='
        printf("\n");
        for (i = 0; i < N; i++)
        {
            printf("%s\n", menu[i]);
        }
        for (i = 0; i < maxStrSize; i++)
            printf("%c", 196); // '-'
        printf("\n");
        printf("Opcao: ");
        gets(entrada);
        opcao = toupper(entrada[0]);
        for (opcaoOk = 0, i = 0; i < N; i++)
            if (opcao == opcoes[i])
            {
                opcaoOk = 1;
                break;
            }
    } while (opcaoOk == 0);
    printf("\n");

    return opcao;
}
