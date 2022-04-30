/*
Programa      : bubble-sort-nao-otimizado
Versão        : 1.0
Descrição     :
Desenvolvedor : Eduardo Ono
Criado em     : 30/04/2022
Atualizado em : 30/04/2022
Comentários   :
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#include "../../../../lib/c/src/util.h"
// #include "../../../../lib/c/src/util.c"
// #include "../../../../lib/c/src/array_sort.h"
// #include "../../../../lib/c/src/array_sort.c"
// #include "array_sort.h"
// #include "array_sort.c"

void desenharBarra(COORD pos, int length, char);
int *inicializarVetor(int *, int);
void imprimirVetor(int *v, const int);

int main()
{
    int *v = NULL;
    int n;

    printf("%s\n", TESTE);
    do
    {
        clrscr();
        printf("Entre com o numero de elementos do vetor ou 0 (zero) para sair: ");
        scanf("%d", &n);
        if (n <= 0)
            return 0;
        getchar();
        if (n > 20)
        {
            printf("O numero de elementos deve ser menor ou igual a 20!\n");
            printf("Tecle <ENTER> para continuar...");
            getchar();
            continue;
        }
        v = inicializarVetor(v, n);
        imprimirVetor(v, n);
        
        printf("Tecle <ENTER> para continuar...");
        getchar();
    } while (n > 0);
    free(v);

    return 0;
}

void desenharBarra(COORD origem, int length, char ch)
{
    COORD pos = origem;

    gotoxy(pos.X, pos.Y);
    for (int i = pos.X; i < pos.Y + length; i++)
    {
        putchar(ch);
    }
}

int *inicializarVetor(int v[], int n)
{
    if (v != NULL)
        free(v);
    v = (int *)malloc(n * sizeof *v);
    if (v == NULL)
        return NULL;
    srand(time(0));
    for (int i = 0; i < n; i++)
        v[i] = rand() % 100;

    return v;
}

void imprimirVetor(int *v, int N)
{
    for (int i = 0; i < N; i++)
        printf("%d  ", v[i]);
    printf("\n");
}
