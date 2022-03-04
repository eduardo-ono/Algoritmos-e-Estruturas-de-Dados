/*

    OBS.: Este programa está ERRADO! Utilizado somente para fins didáticos.
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
    int divisor;
    int v[numDivisores], i = 0;

    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
        {
            v[i] = divisor;
            i++;
        }
    }

    return v;
}

int main()
{
    int num = 6;
    int numDivisores;
    int *v, i;

    numDivisores = determinarNumDivisores(num);
    v = determinarDivisores(num, numDivisores);

    for (i = 0; i < numDivisores; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
