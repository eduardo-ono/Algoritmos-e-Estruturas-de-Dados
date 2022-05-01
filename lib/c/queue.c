/*
Programa      : queue.c ("biblioteca")
Versão        : 1
Descrição     : "Biblioteca" para implementação de filas.
Desenvolvedor : Eduardo Ono
Criado em     : 31/03/2022
Atualizado em : 08/04/2022
Comentários   : alpha
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

// Verifica se uma fila está vazia.
bool queue_isEmpty(No **pLista)
{    
    return (*pLista == NULL);
}

int queue_size(No **pLista)
{
    No *p = *pLista;
    int cont = 0;

    while (p != NULL)
    {
        cont++;
        p = p->prox;
    }

    return cont;
}

// Insere Nó no fim da fila.
void enqueue(No **pLista, INFO info)
{
    No *novoNo, *p = *pLista;

    novoNo = (No *)malloc(sizeof *p);
    if (novoNo == NULL)
        return;
    
    novoNo->info = info;
    novoNo->prox = NULL;
    if (queue_isEmpty(pLista))
        *pLista = novoNo;
    else
    {
        // p percorre a lista até apontar para o último nó
        while (p->prox != NULL)
            p = p->prox;
        p->prox = novoNo;
    }
}

// Remove Nó do início da fila.
INFO dequeue(No **pLista)
{
    No *p = *pLista;
    INFO info;

    if (queue_isEmpty(pLista))
        return info;

    *pLista = (*pLista)->prox;
    info = p->info;
    free(p);

    return info;
}
