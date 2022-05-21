/*
Programa      : quickSort-callback
Versão        : 1.0
Descrição     : Ordenação de vetores através do algoritmo Quick Sort "nativo".
Desenvolvedor : Eduardo Ono
Criado em     : 21/05/2022
Atualizado em : 21/05/2022
Comentários   : 
Referência(s) : https://www.youtube.com/watch?v=sxTFSDAZM8s&t=17s
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compararInt(const void *pa, const void *pb);
int compararFloat(const void *pa, const void *pb);
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

    // Vetor de inteiros
    printf("Vetor original:\n");
    imprimirVetorInt(vInt, N);
    qsort(vInt, N, sizeof (int), compararInt); // Quick Sort "nativo" (stdlib.h)
    printf("Vetor ordenado:\n");
    imprimirVetorInt(vInt, N);
    putchar('\n');

    // Vetor de float
    printf("Vetor original:\n");
    imprimirVetorFloat(vFloat, N);
    qsort(vFloat, N, sizeof (float), compararFloat);
    printf("Vetor ordenado:\n");
    imprimirVetorFloat(vFloat, N);

    return 0;
}

int compararInt(const void *pa, const void *pb)
{
    int a = *((int *)pa);
    int b = *((int *)pb);

    return a - b;
}

int compararFloat(const void *pa, const void *pb)
{
    float a = *((float *)pa);
    float b = *((float *)pb);

    return a - b;
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
