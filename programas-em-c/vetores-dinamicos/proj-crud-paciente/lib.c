#include <string.h>
#include "paciente.h"

void listarPacientes(Paciente v[], const int N)
{
    int i;

    if (v == NULL || N == 0) {
        printf("--> Vetor vazio!\n");
        return;
    }

    printf("Index | %-30s | Peso (kg) | Altura (m) | IMC\n", "Nome");
    printf("________________________________________\n\n");
    for (i = 0; i < N; i++)
        printf("%5d | %-30s |   %5.1f   |    %4.2f    | %4.1f\n", i, v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    printf("\n");
}

Paciente cadastrarNovoPaciente()
{
    Paciente paciente; // Criado na "stack"
    float peso, altura;

    printf("Nome: ");
    gets(paciente.nome);
    do {
        printf("Peso [kg]: ");
        scanf("%f", &peso);
    } while (peso <= 0.0 || peso > 500.0);
    do {
        printf("Altura [m]: ");
        scanf("%f", &altura);
    } while (altura <= 0.0 || altura > 3.0);
    paciente.peso = peso;
    paciente.altura = altura;
    paciente.imc = peso / (altura * altura);

    return paciente;
}

int removerPaciente()
{
    int index = -1;

    printf("Entre com o index do paciente a ser removido: ");
    scanf("%d", &index);

    return index;
}
