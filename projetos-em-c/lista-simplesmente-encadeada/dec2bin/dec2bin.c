#include <stdio.h>
#include <stdlib.h>

#define Info int // Todo tipo "Info" será substituído pelo tipo "int"
#include "../_lib/linkedList.c" // "Biblioteca" para listas simplesmente encadeadas

void imprimirInfo(No *);

int main()
{
    int num, quociente, resto;
    No *lista = NULL; // Inicializa a lista encadeada como vazia

    while (1)
    {
        lista = limpar(lista); // "linkedList.c"
        printf("Entre com um numero inteiro ou 0 para sair: ");
        scanf("%d", &num);
        if (num < 1)
            break;
        quociente = 1;
        while (quociente > 0)
        {
            quociente = num / 2;
            resto = num % 2;
            num = quociente;
            lista = inserirNoInicio(lista, resto); // "linkedList.c"
        }
        imprimirInfo(lista);
        printf("\n");
    }

    return 0;
}

// Imprime os dados armazenados na lista
void imprimirInfo(No *lista)
{
    No *p = lista;

    while (p != NULL)
    {
        printf("%d", p->info);
        p = p->prox;
    }
}
