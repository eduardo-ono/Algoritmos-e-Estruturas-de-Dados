#include <stdio.h>
#include <stdlib.h>

void imprimirDivisores(int num)
{
    int divisor;

    for (divisor = 1; divisor <= num; divisor++)
    {
        if (num % divisor == 0)
            printf("%d ", divisor);
    }
    printf("\n");
}

int main()
{
    int num = 100;

    imprimirDivisores(num);

    return 0;
}
