/*
Programa      : pilha_soma_inteiros.c
Versão        : 01
Descrição     : Soma inteiros muito grandes.
Desenvolvedor : Eduardo Ono
Criado em     : 27/03/2022
Atualizado em : 27/03/2022
Comentários   : Utiliza pilhas para armazenamento dos algarismos das parcelas.
*/

#include <stdio.h>
#include <stdlib.h>

#define Info int
#include "../_lib/stack.c"

No *lerNumero(No *);
void imprimirPilha(No *);

int main()
{
    No *parcela1 = NULL, *parcela2 = NULL, *soma;
    int aux = 0;

    printf("Entre com o primeiro inteiro positivo: ");
    parcela1 = lerNumero(parcela1);
    printf("Entre com o segundo inteiro positivo: ");
    parcela2 = lerNumero(parcela2);

    while (!stack_isEmpty(parcela1) || !stack_isEmpty(parcela2))
    {
        if (!stack_isEmpty(parcela1))
        {
            aux += parcela1->info;
            stack_pop(&parcela1);
        }
        if (!stack_isEmpty(parcela2))
        {
            aux += parcela2->info;
            stack_pop(&parcela2);
        }
        stack_push(&soma, aux % 10);
        aux = (aux >= 10) ? 1 : 0;
    }

    imprimirPilha(soma);
    stack_clear(&parcela1);
    stack_clear(&parcela2);
    stack_clear(&soma);

    return 0;
}

// Lê os algarismos de um número e os armazena em uma pilha.
No *lerNumero(No *pilha)
{
    char ch;
    int algarismo;

    do {
        ch = getche(); // Lê como caracter
        if (ch >= '0' && ch <= '9')
        {
            algarismo = ch - '0'; // Converte o caracter para um algarismo inteiro
            stack_push(&pilha, algarismo);
        }
    } while (ch != 13);
    printf("\n");

    return pilha;
}

void imprimirPilha(No *pilha)
{
    No *p = pilha;

    while (p != NULL)
    {
        printf("%d", p->info);
        p = p->prox;
    }
    printf("\n");
}
