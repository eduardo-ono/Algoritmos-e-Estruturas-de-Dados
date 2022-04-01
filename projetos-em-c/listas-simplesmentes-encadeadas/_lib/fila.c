/*
Programa      : fila.c ("biblioteca")
Versão        : 1
Descrição     : "Biblioteca" para implementação de filas.
Desenvolvedor : Eduardo Ono
Criado em     : 31/03/2022
Atualizado em : 01/04/2022
Comentários   : alpha
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef FILA_C
#define FILA_C

#ifndef Info
#define Info int
#endif

typedef struct no {
    Info info;
    struct no *prox; 
} No;

// Protótipos das funções
// No VS Code, posicione o cursor sobre o nome da função e pressionando F12 para ser levado até a definição da função

bool queue_isEmpty(No **);
int queue_size(No **);
void enqueue(No **, Info);
Info dequeue(No **);

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
void enqueue(No **pLista, Info info)
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
Info dequeue(No **pLista)
{
    No *p = *pLista;
    Info info;

    if (queue_isEmpty(pLista))
        return info;

    *pLista = (*pLista)->prox;
    info = p->info;
    free(p);

    return info;
}

#endif
