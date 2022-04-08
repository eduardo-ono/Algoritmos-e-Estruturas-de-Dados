#include <stdio.h>
#include <stdlib.h>

#define INFO int
#include "../../bibliotecas-em-c/linkedList.h"

int list_size(No *lista)
{
    int size;

    for (size = 0; lista != NULL; size++, lista = lista->prox);

    return size;
}

// Apenas para teste. Não faz parte da resolução do exercício.
int main()
{
    No *lista = NULL;
    int size;

    // Popula a lista com os inteiros 2, 4, 6, 8, 10, 12, 14, 16, 18 e 20 (10 números).
    for (int num = 2; num <= 20; num += 2)
        lista = linkedList_inserirNoFim(lista, num);
    
    size = list_size(lista);
    printf("Tamanho da lista = %d\n", size);
    
    return 0;
}
