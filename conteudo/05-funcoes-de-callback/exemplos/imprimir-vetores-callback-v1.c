/*
Programa      : imprimir-vetores-callback
Versão        : 1
Descrição     : Imprime vários tipos de vetores através de funções de callback.
Desenvolvedor : Eduardo Ono
Criado em     : 21/05/2022
Atualizado em : 21/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirInt(void *x);
void imprimirFloat(void *x);
void imprimirVetor(void *array, const int N, int size, void (*imprimirElemento)(void *))
;

int main()
{
    const int N = 50;
    int vInt[N];
    float vFloat[N];

    srand(time(0)); // Semente para a função rand()
    // Gera números inteiros aleatórios
    for (int i = 0; i < N; i++)
    {
        vInt[i] = rand() % 100;
        vFloat[i] = rand() % 1000 * 0.1;
    }

    printf("Vetor de inteiros:\n");
    imprimirVetor(vInt, N, sizeof (int), imprimirInt);
    putchar('\n');
    printf("Vetor de floats:\n");
    imprimirVetor(vFloat, N, sizeof (float), imprimirFloat);
    putchar('\n');

    return 0;
}

void imprimirVetor(void *array, const int N, int size, void (*imprimirElemento)(void *))
{

    for (int i = 0; i < N; i++)
        imprimirElemento((char *)array + i * size);
    printf("\n");
}

void imprimirInt(void *x)
{
    printf("%d  ", *(int *)x);
}

void imprimirFloat(void *x)
{
    printf("%.1f  ", *(float *)x);
}
