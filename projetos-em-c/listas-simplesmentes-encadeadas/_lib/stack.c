#include <stdlib.h>

#ifndef STACK_C
#define STACK_C

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

int stack_isEmpty(No *);
int stack_size(No *);
void stack_clear(No **);
void stack_push(No **, Info);
Info stack_pop(No **);

// Percorre a lista liberando cada nó individualmente através da função free()

int stack_isEmpty(No *lista)
{
    return (lista == NULL);
}

int stack_size(No *lista)
{
    No *p = lista;
    int cont = 0;

    while (p != NULL)
    {
        cont++;
        p = p->prox;
    }

    return cont;
}

void stack_clear(No **pLista)
{
    No *p = *pLista;

    while (*pLista != NULL)
    {
        p = *pLista;
        *pLista = (*pLista)->prox;
        free(p);
    }
}

// Insere nó no topo da stack
void stack_push(No **pLista, Info info)
{
    No *p;

    p = (No *)malloc(sizeof *p);
    if (p == NULL)
        return;

    p->info = info;
    if (stack_isEmpty(*pLista))
        p->prox = NULL;
    else
        p->prox = *pLista;
    *pLista = p;
}

// Remove o primeiro nó da pilha e retorna os dados do nó removido.
Info stack_pop(No **pLista)
{
    No *p = *pLista;
    Info info;

    if (stack_isEmpty(*pLista))
        return info;

    *pLista = (*pLista)->prox;
    info = p->info;
    free(p);

    return info;
}

#endif
