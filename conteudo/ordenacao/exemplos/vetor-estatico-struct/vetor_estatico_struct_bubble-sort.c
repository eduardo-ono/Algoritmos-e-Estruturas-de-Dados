/*
Programa      : bubble-sort-array.c
Versão        : 1
Descrição     : Uso do bubble sort em um array.
Desenvolvedor : Eduardo Ono
Criado em     : 09/04/2022
Atualizado em : 09/04/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "array_sort.h"
// #include "../../../../../libraries/c/array_sort.c"

int popularVetor(Pessoa *, const int, char *, float, float);
void imprimirVetor(Pessoa *v, const int);

int main()
{
    const int N = 5;
    Pessoa v[N];

    popularVetor(v, N, "Susanna Hoffs", 63, 1.57);
    popularVetor(v, N, "Fulano de Tal", 78, 1.73);
    popularVetor(v, N, "Ciclano de Tal", 69, 1.70);
    popularVetor(v, N, "Beltrano de Tal", 66, 1.67);
    popularVetor(v, N, "Mengano de Tal", 84, 1.76);
    printf("Vetor original:\n");
    imprimirVetor(v, N);
    array_bubbleSort_debug(v, N);
    printf("Vetor ordenado:\n");
    imprimirVetor(v, N);

    return 0;
}

int popularVetor(Pessoa *v, const int N, char *nome, float peso, float altura)
{
    static int i = 0;

    if (peso <= 0 || peso <= 0 || i > N-1)
        return 1;
    strcpy(v[i].nome, nome);
    v[i].peso = peso;
    v[i].altura = altura;
    v[i].imc = peso / (altura * altura);
    i++;

    return 0;
}

void imprimirVetor(Pessoa v[], const int N)
{
    printf("%-30s | %s | %s | %s\n", "Nome", "Peso (kg)", "Altura (m)", "IMC");
    for (int i = 0; i < N; i++)
    {
        printf("%-30s %9.1f %11.2f %9.1f\n", v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    }
    printf("\n");
}
