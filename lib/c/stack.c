#include "stack.h"

// Verifica se uma lista encadeada está vazia.
bool stack_isEmpty(No *lista)
{
    return (lista == NULL);
}

// Retorna o tamanho da lista encadeada.
int stack_size(No *lista)
{
    No *p = lista;
    int cont = 0;

    for (cont = 0; p != NULL; cont++, p = p->prox);

    return cont;
}

// Limpa a lista "desalocando" todos os nós.
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

// Insere nó no topo da stack.
void stack_push(No **pLista, INFO info)
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
INFO stack_pop(No **pLista)
{
    No *p = *pLista;
    INFO info;

    if (stack_isEmpty(*pLista))
        return info;

    *pLista = (*pLista)->prox;
    info = p->info;
    free(p);

    return info;
}
