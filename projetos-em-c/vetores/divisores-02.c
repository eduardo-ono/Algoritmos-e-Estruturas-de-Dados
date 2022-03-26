/*

    OBS.: Este programa está parcialmente ERRADO! Utilizado somente para fins didáticos.
*/

#include <stdio.h>
#include <stdlib.h>

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
    int v[4], i;

    determinarDivisores(num, v);

    for (i = 0; i < 4; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
