#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#ifndef ARRAY_SORT_H
#define ARRAY_SORT_H

/* Exemplos de DEFINEs
#define ARRAY_COMPARAR(x,y) ((x)<(y))
*/

//---------------------------------------------------------------------------
typedef struct {
    char nome[100];
    float peso;
    float altura;
    float imc;
} Pessoa;

#define INFO Pessoa
#define ARRAY_COMPARAR(x,y) (strcmp(x.nome,y.nome)==1)
//---------------------------------------------------------------------------

#ifndef INFO
#define INFO int
#endif

#ifndef ARRAY_COMPARAR
#define ARRAY_COMPARAR(x,y) ((x)>(y))
#endif

void array_bubbleSort(INFO *, const int);
void array_bubbleSort_debug(INFO *, const int);
void array_insertionSort(INFO *, const int);
void array_selectionSort(INFO *, const int);

#endif
