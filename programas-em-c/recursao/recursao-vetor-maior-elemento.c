#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f(int v[], const int N)
{
    int x;

    if (N == 1)
      return v[0];
    else
    {
        x = f(v, N-1);
        if (x < v[N-1])
            return x;
        else
            return v[N-1]; 
    }
}

int maiorElemento(int v[], const int N)
{
    int i, max;

    max = v[0];
    for (i = 1; i < N; i++)
    {
        if (v[i] > max)
            max = v[i];
    }

    return max;
}

void imprimirVetor(int v[], const int N)
{
    int i;

    for (i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    const int N = 100;
    int v[N];
    int i, max;

    srand(time(0));
    for (i = 0; i < N; i++)
    {
        v[i] = rand() % 100;
    }

    imprimirVetor(v, N);
    max = maiorElemento(v, N);
    printf("Maior elemento = %d\n", max);
    max = f(v, N);
    printf("Maior elemento = %d\n", max);

    return 0;
}
