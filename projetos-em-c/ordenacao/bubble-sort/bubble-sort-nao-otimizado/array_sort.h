#include <stdlib.h>
#include <stdbool.h>

#ifndef ARRAY_SORT_H
#define ARRAY_SORT_H

//---------------------------------------------------------------------------
// INCLUA SEU CÓDIGO AQUI...
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
