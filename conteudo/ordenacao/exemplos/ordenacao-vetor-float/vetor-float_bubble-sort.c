/*
Programa      : ordenacao-vetor-float
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 29/04/2022
Atualizado em : 29/04/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../../lib/c/include/utils.h" // clrscr()
// #include "../../../../lib/c/src/utils.c"
#include "array_sort.h"
// #include "../../../../lib/c/src/array_sort.c"

void imprimirVetor(float *, const int);
void popularVetor(float *, const int);

int main()
{
    const int N = 20;
    float v[N];

    clrscr();
    popularVetor(v, N); // Inicializa os elementos com números aleatórios
    printf("Vetor original:\n");
    imprimirVetor(v, N);
    array_bubbleSort(v, N);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N);

    return 0;
}

// Imprime o vetor.
void imprimirVetor(float v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%.1f  ", v[i]);
    putchar('\n');
}

// Inicializa os elementos do vetor com valores do tipo float.
void popularVetor(float *v, const int N)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
        v[i] = rand() % 100 + 0.1 * (rand() % 10);
}
