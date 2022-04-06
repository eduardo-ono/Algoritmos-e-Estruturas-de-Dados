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
#include <math.h>
#include <time.h>

// Funções
// No VS Code, posicionar o cursor sobre o nome da função e teclar F12 para "pular" para a implementação.

int encontrarMaximo(int *, const int);
int encontrarMinimo(int *, const int);
void encontrarMaximoMinimo(int *, const int, int *, int *);
float calcularSoma(int *, const int);
float calcularMedia(int *, const int);
float calcularDesvioPadrao(int *, const int );

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

    printf("Maior elemento = %d\n", encontrarMaximo(v, N));
    printf("Menor elemento = %d\n", encontrarMinimo(v, N));
    encontrarMaximoMinimo(v, N, &maximo, &minimo);
    printf("Maior = %d  Menor = %d\n", maximo, minimo);
    printf("Soma = %.0f\n", calcularSoma(v, N));
    printf("Media = %.2f\n", calcularMedia(v, N));
    printf("Desvio Padrao = %.4f\n", calcularDesvioPadrao(v, N));

    return 0;
}

// Item i) Encontra o maior elemento do vetor.
int encontrarMaximo(int v[], const int N)
{
    int maximo = -1;

    if (N > 0)
        maximo = v[0];

    for (int i = 1; i < N; i++)
        if (v[i] > maximo)
            maximo = v[i]; 

    return maximo;
}

// Item ii) Encontra o menor elemento do vetor.
int encontrarMinimo(int v[], const int N)
{
    int minimo = -1;

    if (N > 0)
        minimo = v[0];

    for (int i = 1; i < N; i++)
        if (v[i] < minimo)
            minimo = v[i]; 

    return minimo;
}

// Item iii) Encontra o maior e o menor elemento do vetor.
void encontrarMaximoMinimo(int v[], const int N, int *maximo, int *minimo)
{
    *maximo = *minimo = -1;
    if (N > 0)
    {
        *maximo = *minimo = v[0];
    }

    for (int i = 1; i < N; i++)
    {
        if (v[i] > *maximo)
            *maximo = v[i]; 
        if (v[i] < *minimo)
            *minimo = v[i]; 
    }
}

// Item vi) Calcula a soma dos elementos do vetor.
float calcularSoma(int v[], const int N)
{
    float soma;

    soma = 0;
    for (int i = 0; i < N; i++)
        soma = soma + v[i];

    return soma;
}

// Item vii) Calcula a média dos elementos do vetor.
float calcularMedia(int v[], const int N)
{
    float media;

    media = calcularSoma(v, N) / N;

    return media;
}

// item viii) Calcula o desvio padrão da média dos elementos do vetor.
float calcularDesvioPadrao(int v[], const int N)
{
    float media, somatorio, variancia, desvio_padrao;

    media = calcularMedia(v, N);

    somatorio = 0;
    for (int i = 0; i < N; i++)
        somatorio = somatorio + pow(v[i] - media, 2);
    variancia = somatorio / N;
    desvio_padrao = sqrt(variancia);

    return desvio_padrao;
}
