/*
Programa      : Média, Variância e Desvio Padrão
Versão        : 1
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 05/04/2022
Atualizado em : 05/04/2022
Comentários   : Desvio padrão populacional
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, soma = 0, media, somatorio, variancia, desvio_padrao;
    int n = 0; // Acumula o número de pessoas
    float *v = NULL; // Vetor

    do
    {
        printf("Entre com uma altura em metros ou 0 para sair: ");
        scanf("%f", &altura);
        // Armazena as alturas no vetor dinâmico.
        if (altura > 0 )
        {
            if (n == 0)
                v = (float*) malloc(sizeof *v);
            else
                v = realloc(v, (n + 1) * sizeof *v);
            v[n] = altura;
            n++;
        }
    } while (altura > 0);

    if (n == 0) return 1;

    // Calcula a soma e imprime os elementos do vetor.
    for (int i = 0; i < n; i++)
    {
        soma = soma + v[i];
        printf("%.1f ", v[i]);
    }
    printf("\n");

    // Calcula a média.
    media = soma / n;

    // Calcula o desvio padrão (populacional)
    somatorio = 0;
    for (int i = 0; i < n; i++)
        somatorio = somatorio + pow(v[i] - media, 2);
    variancia = somatorio / n;
    desvio_padrao = sqrt(variancia);

    printf("Numero de pessoas = %d\n", n);
    printf("Media = %.2f\n", media);
    printf("Desvio padrao = %.3f\n", desvio_padrao);

    return 0;
}
