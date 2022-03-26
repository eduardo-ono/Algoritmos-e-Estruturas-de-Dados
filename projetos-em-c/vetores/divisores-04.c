/*
    Tópico: Arrays dinâmicos
*/

#include <stdio.h>
#include <stdlib.h>

int determinarNumDivisores(int num)
{
    int divisor, numDivisores = 0;

    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            numDivisores++;
    }

    return numDivisores;
}

int* determinarDivisores(int num, int numDivisores)
{
    int divisor, i;
    int *v;

    v = (int*) malloc(numDivisores * sizeof (int));
    if (v != NULL)
    {
        for (divisor = 1, i = 0; divisor <= num; divisor++)
        {
            if (num % divisor == 0)
                v[i++] = divisor;
        }
    }

    return v;
}

void imprimirVetor(int v[], const int N)
{
    int i;

    if (v != NULL)
    {
        for (i = 0; i < N; i++)
            printf("%d ", v[i]);
        printf("\n");
    }
}

int main()
{
    int num = 1000;
    int numDivisores;
    int *v, i;

    numDivisores = determinarNumDivisores(num);
    v = determinarDivisores(num, numDivisores);
    printf("Divisores de %d: ", num);
    imprimirVetor(v, numDivisores);
    free(v);

    return 0;
}
