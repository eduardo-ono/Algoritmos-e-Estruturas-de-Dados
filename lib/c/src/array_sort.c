/*
Programa      : array_sort.c
Versão        : 1
Descrição     : Biblioteca de algoritmos de ordenação para arrays.
Desenvolvedor : Eduardo Ono
Criado em     : 09/04/2022
Atualizado em : 09/04/2022
Comentários   : Por enquanto, apenas para valores numéricos.
*/

#include "array_sort.h"
#include <stdio.h>

void _array_trocar(INFO *, INFO *);

// Algoritmo "BubbleSort" otimizado.
void array_bubbleSort(INFO v[], const int N)
{
    bool trocou = true;

    for (int varredura = 0; varredura < N-1 && trocou; varredura++)
    {
        trocou = false;
        for (int i = 0; i < N-1-varredura; i++)
        {
            if (ARRAY_COMPARAR(v[i], v[i + 1]))
            { // Troca os elementos
                _array_trocar(&v[i], &v[i + 1]);
                trocou = true;
            }
        }
    }
}

void array_bubbleSort_debug(INFO v[], const int N)
{
    int comparacoes = 0, trocas = 0;
    bool trocou = true;

    printf("---------------------------------------------------------------------------\n");
    printf("array_bubbleSort_debug...");
    for (int varredura = 0; varredura < N-1 && trocou; varredura++)
    {
        trocou = false;
        for (int i = 0; i < N-1-varredura; i++)
        {
            comparacoes++;
            if (ARRAY_COMPARAR(v[i], v[i + 1]))
            { // Troca os elementos
                _array_trocar(&v[i], &v[i + 1]);
                trocou = true;
                trocas++;
            }
        }
    }
    printf("\nDebug --> Comparacoes = %d, trocas = %d\n", comparacoes, trocas);
    printf("---------------------------------------------------------------------------\n");
}

void _array_trocar(INFO *x, INFO *y)
{
    INFO aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
