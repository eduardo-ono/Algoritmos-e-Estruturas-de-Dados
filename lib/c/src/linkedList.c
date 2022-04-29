#include <stdlib.h>
#include "linkedList.h"

// Retorna o número de nós da lista.
int linkedList_size(No *lista)
{
    int cont;

    for (cont = 0; lista != NULL; cont++, lista = lista->prox);

    return cont;
}

// Percorre a lista liberando cada nó individualmente através da função free().
No *linkedList_clear(No *lista)
{
    No *p;

    while (lista != NULL)
    {
        p = lista;
        lista = lista->prox;
        free(p);
    }

    return NULL;
}

No* linkedList_inserirNoInicio(No *lista, INFO info)
{
    No *p;

    p = (No *)malloc(sizeof *p);
    if (p == NULL)
        return lista;
    p->info = info;
    if (lista == NULL)
        p->prox = NULL;
    else
        p->prox = lista;
    lista = p;

    return lista;
}

No* linkedList_inserirNoFim(No *lista, INFO info)
{
    No *novoNo, *p = lista;

    novoNo = (No*) malloc(sizeof *p);
    if (novoNo == NULL) return lista;
    
    novoNo->info = info;
    novoNo->prox = NULL;
    if (lista == NULL)
        lista = novoNo;
    else
    {
        // p percorre a lista até apontar para o último nó
        while (p->prox != NULL)
            p = p->prox;
        p->prox = novoNo;
    }

    return lista;
}
