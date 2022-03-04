/*

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

void determinarDivisores(int num, int v[])
{
    int divisor;
    int i = 0;

    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            v[i++] = divisor;
    }
}

int main()
{
    int num = 6;
    int numDivisores;
    int *v, i;

    numDivisores = determinarNumDivisores(num);
    v = (int*) malloc(numDivisores * sizeof (int));
    determinarDivisores(num, v);

    for (i = 0; i < numDivisores; i++)
        printf("%d ", v[i]);
    printf("\n");

    free(v);

    return 0;
}
