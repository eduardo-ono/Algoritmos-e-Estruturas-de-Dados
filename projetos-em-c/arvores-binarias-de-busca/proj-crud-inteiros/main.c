/*
Programa      : proj-crud-inteiros
Versão        : 1.0
Descrição     :
Desenvolvedor : Eduardo Ono
Criado em     : 13/05/2022
Atualizado em : 13/05/2022
Comentários   :
*/

#include <stdio.h>
#include <stdlib.h>

#define INFO int
#include "../../../lib/c/binarySearchTree.h"
#include "../../../lib/c/binarySearchTree.c"

void imprimirRED(NO *arvore);
void imprimirERD(NO *arvore);
void imprimirEDR(NO *arvore);

int main()
{
    NO *arvore = NULL;
    int num, num_nos;

    do
    {
        printf("Entre com um numero inteiro positivo ou -1 para sair: ");
        scanf("%d", &num);
        if (num >= 0)
            arvore = bst_add(arvore, num);
    } while (num >= 0);
    getchar();
    imprimirRED(arvore);
    printf("\n\n");
    imprimirERD(arvore);
    printf("\n\n");
    imprimirEDR(arvore);
    printf("\n\n");
    num_nos = bst_size(arvore);
    printf("Numero de nos = %d\n", num_nos);
    return 0;
}

// Pré ordem.
void imprimirRED(NO *arvore)
{
    NO *p = arvore;

    printf("<");
    if (p != NULL)
    {
        printf("%d ", p->info);
        imprimirRED(p->esq);
        imprimirRED(p->dir);
    }
    printf(">");
}

// Em ordem.
void imprimirERD(NO *arvore)
{
    NO *p = arvore;

    printf("<");
    if (p != NULL)
    {
        imprimirERD(p->esq);
        printf("%d ", p->info);
        imprimirERD(p->dir);
    }
    printf(">");
}

// Pós ordem.
void imprimirEDR(NO *arvore)
{
    NO *p = arvore;

    printf("<");
    if (p != NULL)
    {
        imprimirEDR(p->esq);
        imprimirEDR(p->dir);
        printf("%d ", p->info);
    }
    printf(">");
}
