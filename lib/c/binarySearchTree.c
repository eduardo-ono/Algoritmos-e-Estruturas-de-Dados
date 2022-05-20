/*
Programa      : binarySearchTree
Versão        : 1.0
Descrição     : Biblioteca para Árvore Binária de Busca
Desenvolvedor : Eduardo Ono
Criado em     : 13/05/2020
Atualizado em : 20/05/2022
Comentários   : 
*/

#include <stdlib.h>
#include "binarySearchTree.h"

// Retorna o tamanho da árvore (número de nós).
int bst_size(NO *arvore)
{
    NO *p = arvore;
    int cont = 0;

    if (p != NULL)
    {
        cont++;
        bst_size(p->esq);
        bst_size(p->dir);
    }

    return cont;
}

// Insere um novo nó na árvore.
NO *bst_add(NO *arvore, INFO info)
{
    NO *p = arvore;

    if (p == NULL)
    {
        p = (NO *) malloc(sizeof *p);
        p->info = info;
        p->esq = NULL;
        p->dir = NULL;
    }
    else
    {
        if (info < p->info)
            p->esq = bst_add(p->esq, info);
        else
            p->dir = bst_add(p->dir, info);
    }
    return p;
}


