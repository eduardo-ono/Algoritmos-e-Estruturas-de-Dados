/*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N = 5;
    int v[] = { 2, 4, 6, 8, 10 };
    float soma = 0, media;

    for (int i = 0; i < N; i++)
        soma = soma + v[i];

    media = soma / N;

    printf("Media = %.2f\n", media);

    return 0;
}
