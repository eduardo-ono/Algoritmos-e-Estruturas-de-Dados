#include <stdlib.h>

#ifndef LINKEDLIST_C
#define LINKEDLIST_C

#ifndef Info
#define Info int
#endif

typedef struct no
{
    Info info;
    struct no *prox;
} No;

// Protótipos das funções
// No VS Code, posicione o cursor sobre o nome da função e pressionando F12 para ser levado até a definição da função
No *limpar(No *);
No *inserirNoInicio(No *, Info);
No *inserirNoFim(No *lista, Info info);

// Percorre a lista liberando cada nó individualmente através da função free()
No *limpar(No *lista)
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

No *inserirNoInicio(No *lista, Info info)
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

No *inserirNoFim(No *lista, Info info)
{
    No *novoNo, *p = lista;

    novoNo = (No *)malloc(sizeof *p);
    if (novoNo == NULL)
        return lista;
    
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

#endif
