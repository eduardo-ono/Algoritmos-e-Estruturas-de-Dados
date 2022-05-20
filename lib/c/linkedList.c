/*
Programa      : linkedList
Versão        : 1.0
Descrição     : Biblioteca para Listas Simplesmente Encadeadas
Desenvolvedor : Eduardo Ono
Criado em     : 
Atualizado em : 
Comentários   : 
*/

#include <stdlib.h>
#include "linkedList.h"

// Retorna o número de nós da lista.
int linkedList_size(No *lista)
{
    int cont;

    for (cont = 0; lista != NULL; cont++)
        lista = lista->prox;

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

No *linkedList_inserirNoInicio(No *lista, INFO info)
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

No *linkedList_inserirNoFim(No *lista, INFO info)
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

No *linkedList_removerDoInicio(No *lista)
{
    No *p = lista;

    if (lista == NULL)
        return NULL;
    lista = lista->prox;
    free(p);

    return lista;
}

No *linkedList_removerDoFim(No *lista)
{
    No *p = lista;

    // Verifica se a lista é vazia
    if (lista == NULL)
        return NULL;
    // Verifica se existe um único nó na lista
    if (lista->prox == NULL)
        lista = linkedList_removerDoInicio(lista);
    // Percorre a lista até o penúltimo nó
    while (p->prox->prox != NULL)
        p = p->prox;
    free(p->prox);
    p->prox = NULL;

    return lista;
}

No *linkedList_removerDoIndex(No *lista, int idx)
{
    No *p = lista, *aux;

    if (p == NULL)
        return NULL;
    // Validação do idx
    if (idx < 0 || idx >= linkedList_size(lista))
        return lista;

    if (idx == 0)
    {
        lista = linkedList_removerDoInicio(lista);
        return lista;
    }
    if (idx == linkedList_size(lista) - 1)
    {
        lista = linkedList_removerDoFim(lista);
        return lista;
    }
    for (int i = 0; i < idx; i++)
        p = p->prox;
    aux = p->prox;
    p->prox = aux->prox;
    free(aux);

    return lista;
}
