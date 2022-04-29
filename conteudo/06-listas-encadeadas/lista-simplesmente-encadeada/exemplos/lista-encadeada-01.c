#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
} Info;

typedef struct no {
    Info info;
    struct no *prox;
} No;


No* inserirNoFimLista(No *lista, Info info)
{
    No *p = lista, *pAux;

    pAux = (No*) malloc(sizeof (No));
    pAux->info = info;
    pAux->prox = NULL;
    if (lista == NULL)
    {
        lista = pAux;
    }
    else
    {
        // Procura pelo último elemento da lista
        while (p->prox != NULL)
            p = p->prox;
        p->prox = pAux;
    }

    return lista;
}

void imprimirLista(No *lista)
{
    No *p = lista;

    while (p != NULL)
    {
        printf("%d ", p->info.num);
        p = p->prox;
    }
    printf("\n");
}

No* determinarDivisores(No *lista, int num)
{
    int divisor;
    Info info;

    for (divisor = 1; divisor <= num; divisor++)
        if (num % divisor == 0)
        {
            info.num = divisor;
            lista = inserirNoFimLista(lista, info);
        }

    return lista; 
}

int main()
{
    int num = 100;
    No *lista = NULL, *lista2;

    lista = determinarDivisores(lista, num);
    imprimirLista(lista);
    free(lista);

    return 0;
}
