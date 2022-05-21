/*
Programa      : ordenacao-vetor-inteiros
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 28/04/2022
Atualizado em : 28/04/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../../lib/c/include/utilsio.h"
#include "array_sort.h"

void imprimirVetor(int *, const int);
void popularVetor(int *, const int);

int main()
{
    const int N = 20;
    int v[N];

    clrscr();
    popularVetor(v, N); // Inicializa os elementos com números aleatórios
    printf("Vetor original:\n");
    imprimirVetor(v, N);
    array_bubbleSort(v, N);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N);

    return 0;
}

void imprimirVetor(int v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", v[i]);
    putchar('\n');
}

void popularVetor(int *v, const int N)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
        v[i] = rand() % 100;
}
