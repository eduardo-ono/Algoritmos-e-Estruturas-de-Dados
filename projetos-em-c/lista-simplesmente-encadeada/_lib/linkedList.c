#include <stdlib.h>

#ifndef LINKEDLIST_C
#define LINKEDLIST_C

#ifndef Info
#define Info int
#endif

typedef struct no {
    Info info;
    struct no *prox;
} No;

// Percorre a lista liberando cada nó individualmente através da função free()
No* limpar(No *lista)
{
    No *p = lista, *pProx;

    while (p != NULL)
    {
        pProx = p->prox;
        free(p);
        p = pProx;
    }

    return NULL;
}

No* inserirNoInicio(No *lista, Info info)
{
    No *p;

    p = (No*) malloc(sizeof *p);
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

#endif
