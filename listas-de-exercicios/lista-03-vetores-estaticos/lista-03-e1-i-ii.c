/*
Programa      : 
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 
Atualizado em : 05/04/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int N = 20;
    int v[N];
    int maximo, minimo;

    // Popula o vetor com números aleatórios.
    srand(time(0)); // Inicializa o gerador de números aleatórios
    for (int i = 0; i < N; i++)
        v[i] = rand() % 100; // v[i] >= 0 e v[i] < 100

    // Imprime o vetor.
    printf("Vetor:\n");
    for (int i = 0; i < N; i++)
        printf("%2d ", v[i]);
    printf("\n");

    // Determina o maior elemento do vetor.
    maximo = v[0];
    minimo = v[0];
    for (int i = 1; i < N; i++)
    {
        if (v[i] > maximo)
            maximo = v[i]; 
        if (v[i] < minimo)
            minimo = v[i];
    }

    printf("Maior elemento = %d\n", maximo);
    printf("Menor elemento = %d\n", minimo);

    return 0;
}
