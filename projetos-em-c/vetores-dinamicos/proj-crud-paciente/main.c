#include <stdio.h>
#include <stdlib.h>
#include "../../../lib/c/util.h"
// #include "../../../lib/c/util.c"

#include "main.h"
#include "arrayList.h"
// #include "../../../lib/c/arrayList.c"
#include "menu.h"
#include "menu.c"

void listarPacientes(Paciente *, const int);
Paciente cadastrarNovoPaciente();
int removerPaciente();
Paciente *importarDados(Paciente *, int *, char *);
void exportarDados(Paciente *, int, char *);

int main()
{
    const int N_MENU = 8; // Número de elementos do menu
    char *menu[] = {
        "[0] Listar pacientes",
        "[1] Adicionar Novo Paciente",
        "[2] Remover Paciente",
        "[3] Procurar Paciente",
        "[4] Importar Dados",
        "[5] Exportar Dados",
        "[L] Limpar a tela",
        "[X] Sair do Programa"
    };
    char opcao;
    Paciente *v = NULL;
    int n = 0, index;
    Paciente paciente;

    do
    {
        opcao = exibirMenu(menu, N_MENU);
        switch (opcao)
        {
            case '0':
                listarPacientes(v, n);
                break;
            case '1':
                paciente = cadastrarNovoPaciente();
                v = array_adicionarNoFim(v, &n, paciente);
                if (v == NULL) 
                    printf("--> ERRO na inclus%co do paciente!\n", 198);
                break;
            case '2':
                index = removerPaciente();
                if (index >= 0)
                    v = array_removerElemento(v, &n, index);
                break;
            case '3':
                printf("--> Ainda n%co impelementada!\n", 198);
                break;
            case '4':
                v = array_limpar(v, &n);
                v = importarDados(v, &n, "lista_pacientes.txt");
                if (n == 0)
                    printf("--> Nenhum registro encontrado!\n");
                break;
            case '5':
                if (n > 0)
                    exportarDados(v, n, "lista_pacientes.txt");
                else
                    printf("--> Nenhum registro encontrado. Opera%c%co cancelada!\n", 135, 198);
                break;
            case 'L':
                clrscr();
                break;
        }
    } while (opcao != 'X');

    return 0;
}

// Lista todos os registros dos pacientes em forma de tabela.
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
            v = array_adicionarNoFim(v, v_length, reg);
        }
    }
    fclose(arquivo);

    return v;
}

// Exporta os dados para um arquivo no formato CSV.
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

    for (i = 0; i < v_length; i++)
    {
        fprintf(arquivo, "%s,%.1f,%.2f,%.1f\n", v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    }
    printf("--> Dados exportados...\n");

    fclose(arquivo);
}
