#include <ctype.h> // toupper()

char exibirMenu(char *menu[], const int N)
{
    char opcao, opcoes[N], entrada[100];
    int i, opcaoOk;

    // Extrai as opções na posição 1 das strings e converte para maiuscula
    for (i = 0; i < N; i++)
    {
        opcao = menu[i][1];
        if ((opcao < '0' || opcao > '9') && (opcao < 'A' || opcao > 'Z') && (opcao < 'a' || opcao > 'z') )
            return 'X';
        opcoes[i] = toupper(opcao);
    }

    do {
        // Imprime o menu
        printf("\n===================================\n");
        for (i = 0; i < N; i++)
        {
            printf("%s\n", menu[i]);
        }
        printf("-----------------------------------\n");
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
