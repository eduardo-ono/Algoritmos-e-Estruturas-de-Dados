/*
Programa      : bubble-sort-array.c
Versão        : 1
Descrição     : Uso do bubble sort em um array.
Desenvolvedor : Eduardo Ono
Criado em     : 09/04/2022
Atualizado em : 09/04/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INFO int
#include "../../../../bibliotecas-em-c/array_sort.h"

void imprimirVetor(int *v, const int);

int main()
{
    const int N = 100;
    int v[N];

    srand(time(0)); // Inicializa o gerador de números aleatórios
    for (int i = 0; i < N; i++)
        v[i] = rand() % 100; // Gera números aleatórios entre 0 e 100

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
        printf("%2d ", v[i]);
    printf("\n");
}
