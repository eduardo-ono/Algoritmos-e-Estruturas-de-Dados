/* 
  Programa      : divisores.c
  Versão        : 01
  Descrição     : Determina os divisores de um inteiro positivo e os armazena em uma lista encadeada
  Desenvolvedor : Eduardo Ono
  Criado em     : 26/03/2022
  Atualizado em : 26/03/2022
  Comentários   : Requer a "biblioteca" linkedList.c
 */

#include <stdio.h>
#include <stdlib.h>

#define Info int // Todo tipo "Info" será substituído pelo tipo "int"
#include "../_lib/linkedList.c"

void imprimirInfo(No *);

int main()
{
    int num = 0, divisor;
    No *lista = NULL; // Inicializa a lista como vazia

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Numero invalido!\n");
        return 1;
    }

    printf("--> Processando...");
    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            lista = inserirNoFim(lista, divisor);
    }
    printf("\r                  \r");
    imprimirInfo(lista);
    limpar(lista);

    return 0;
}

// Imprime os dados armazenados na lista
void imprimirInfo(No *lista)
{
    No *p = lista;

    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}
