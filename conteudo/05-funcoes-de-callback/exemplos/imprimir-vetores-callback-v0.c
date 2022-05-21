/*
Programa      : imprimir-vetores-callback
Versão        : 1.0
Descrição     : Imprime vários tipos de vetores através de funções de callback.
Desenvolvedor : Eduardo Ono
Criado em     : 21/05/2022
Atualizado em : 21/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirVetorInt(int v[], const int N);
void imprimirVetorFloat(float v[], const int N);

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
    imprimirVetorInt(vInt, N);
    putchar('\n');
    printf("Vetor de floats:\n");
    imprimirVetorFloat(vFloat, N);
    putchar('\n');

    return 0;
}

void imprimirVetorInt(int v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%d  ", v[i]);
    printf("\n");
}

void imprimirVetorFloat(float v[], const int N)
{
    for (int i = 0; i < N; i++)
        printf("%.1f  ", v[i]);
    printf("\n");
}
