#include <stdio.h>
#include <string.h>
#include "paciente.h"

void listarPacientes(Paciente v[], const int N)
{
    int i;

    if (v == NULL || N == 0)
    {
        printf("--> Vetor vazio!\n");
        return;
    }

    printf(" %cndice | %-30s | Peso (kg) | Altura (m) | IMC\n", 214, "Nome");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < N; i++)
        printf("%7d | %-30s |   %5.1f   |    %4.2f    | %4.1f\n", i, v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    printf("\n");
}

Paciente cadastrarNovoPaciente()
{
    Paciente paciente; // Criado na "stack"
    float peso, altura;

    printf("--> Cadastro de um novo paciente\n");
    printf("Nome: ");
    gets(paciente.nome);
    do
    {
        printf("Peso [kg]: ");
        scanf("%f", &peso);
        getchar();
    } while (peso <= 0.0 || peso > 500.0);
    do
    {
        printf("Altura [m]: ");
        scanf("%f", &altura);
        getchar();
    } while (altura <= 0.0 || altura > 3.0);
    paciente.peso = peso;
    paciente.altura = altura;
    paciente.imc = peso / (altura * altura);

    return paciente;
}

int removerPaciente()
{
    int index = -1;

    printf("Entre com o %cndice do paciente a ser removido ou -1 para cancelar a opera%c%co: ", 161, 135, 198);
    scanf("%d", &index);
    getchar();

    return index;
}

Paciente *importarDados(Paciente v[], int *v_length, char *filename)
{
    FILE *arquivo = NULL;
    Paciente reg;
    char str[200];
    int num_campos;

    // Abre o arquivo para leitura
    if ((arquivo = fopen(filename, "r")) == NULL)
    {
        printf("--> Erro na abertura do arquivo!\n\n");
        return v;
    }

    printf("--> Importando dados...\n");
    while (!feof(arquivo))
    {
        strcpy(str, "");
        fgets(str, 200, arquivo);
        // Validação da entrada do registro
        num_campos = sscanf(str, "%[^,],%f,%f,%f", reg.nome, &reg.peso, &reg.altura, &reg.imc);
        if (num_campos == 4)
        {
            printf("%s  %.1f  %.2f  %.1f\n", reg.nome, reg.peso, reg.altura, reg.imc);
            v = adicionarNoFimArray(v, v_length, reg);
        }
    }
    fclose(arquivo);

    return v;
}

void exportarDados(Paciente *v, int v_length, char *filename)
{
    FILE *arquivo = NULL;
    int i;

    // Abre o arquivo para escrita
    if ((arquivo = fopen(filename, "w")) == NULL)
    {
        printf("Erro na abertura do arquivo!\n\n");
        return;
    }

    // Exporta os dados para o arquivo no formato CSV
    for (i = 0; i < v_length; i++)
    {
        fprintf(arquivo, "%s,%.1f,%.2f,%.1f\n", v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    }
    printf("--> Dados exportados...\n");

    fclose(arquivo);
}
