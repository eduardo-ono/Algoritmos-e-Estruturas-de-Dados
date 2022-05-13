/*
Programa      : array_sort.c
Versão        : 1.0
Descrição     : Biblioteca de algoritmos de ordenação para arrays.
Desenvolvedor : Eduardo Ono
Criado em     : 09/04/2022
Atualizado em : 30/04/2022
Comentários   : Por enquanto, apenas para elementos numéricos.
*/

#include <stdio.h>
#include <time.h>
#include "array_sort.h"

static void _trocar(INFO *, INFO *);

// Inicializa (popula) um vetor de inteiros com valores aleatórios.
void array_inicializarVetorInt(int v[], const unsigned int N, int max)
{
    // "Semente" para o rand()
    srand(time(0));
    for (unsigned int i = 0; i < N; i++)
    {
        v[i] = rand() % max;
    }
}

// Algoritmo "BubbleSort" otimizado.
void array_bubbleSort(INFO v[], const unsigned int N)
{
    bool trocou = true;

    for (int varredura = 0; varredura < N - 1 && trocou; varredura++)
    {
        trocou = false;
        for (int i = 0; i < N - 1 - varredura; i++)
            if (ARRAY_COMPARAR(v[i], v[i + 1]))
            {
                _trocar(&v[i], &v[i + 1]);
                trocou = true;
            }
    }
}

void array_bubbleSort_debug(INFO v[], const unsigned int N)
{
    int comparacoes = 0, trocas = 0;
    bool trocou = true;

    printf("---------------------------------------------------------------------------\n");
    printf("array_bubbleSort_debug...");
    for (int varredura = 0; varredura < N - 1 && trocou; varredura++)
    {
        trocou = false;
        for (int i = 0; i < N - 1 - varredura; i++)
        {
            comparacoes++;
            if (ARRAY_COMPARAR(v[i], v[i + 1]))
            { // Troca os elementos
                _trocar(&v[i], &v[i + 1]);
                trocou = true;
                trocas++;
            }
        }
    }
    printf("\nDebug --> Comparacoes = %d, trocas = %d\n", comparacoes, trocas);
    printf("---------------------------------------------------------------------------\n");
}

// Algoritmo Insertion Sort.
void array_insertionSort(INFO v[], const unsigned int N)
{
    unsigned int i, j;
    INFO aux;
    for (i = 1; i < N; i++)
    {
        aux = v[i];
        j = i - 1;
        for (j = i - 1; j >= 0 && ARRAY_COMPARAR(v[j], aux); j--)
            v[j + 1] = v[j];
        v[j + 1] = aux;
    }
}

// Algoritmo Selection Sort.
void array_selectionSort(INFO v[], const unsigned int N)
{
    unsigned int i, j, min_idx;

    for (i = 0; i < N - 1; i++)
    {
        // Determina o menor elemento do array
        min_idx = i;
        for (j = i + 1; j < N; j++)
            if (ARRAY_COMPARAR(v[min_idx], v[j]))
                min_idx = j;
        _trocar(&v[min_idx], &v[i]);
    }
}

static void _trocar(INFO *x, INFO *y)
{
    INFO aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
