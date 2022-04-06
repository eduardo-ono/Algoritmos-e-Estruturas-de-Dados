/*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, soma = 0, media;
    int cont = 0; // Número de pessoas
    float *v;

    do
    {
        printf("Entre com uma altura em metros ou 0 para sair: ");
        scanf("%f", &altura);
        if (altura > 0 )
        {
            cont++;
            if (cont == 1)
                v = (float *) malloc(sizeof (float));
            else
                v = realloc(v, cont * sizeof (float));
            v[cont-1] = altura;
        }
    } while (altura > 0);

    for (int i = 0; i < cont; i++)
    {
        soma = soma + v[i];
        printf("%.1f ", v[i]);
    }
    media = soma / cont;
    printf("Numero de pessoas = %d\n", cont);
    printf("\nMedia = %.2f\n", media);

    return 0;
}
