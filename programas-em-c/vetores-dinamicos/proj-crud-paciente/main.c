#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "menu.c"
#include "lib.c"
#include "arrayList.c"

// Função para limpar a tela
void clrscr(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

int main()
{
    const int N_MENU = 6;
    char *menu[] = {
        "[0] Listar pacientes",
        "[1] Adicionar Novo Paciente",
        "[2] Remover Paciente",
        "[3] Procurar Paciente",
        "[L] Limpar a tela",
        "[X] Sair do Programa"
    };
    char opcao;
    Paciente *v = NULL;
    int n = 0, index;
    Paciente paciente;

    do {
        opcao = exibirMenu(menu, N_MENU);

        switch (opcao)
        {
            case '0':
                listarPacientes(v, n);
                break;
            case '1':
                paciente = cadastrarNovoPaciente();
                v = adicionarNoFimArray(v, &n, paciente);
                if (v == NULL)
                    printf("--> ERRO na inclusao do paciente!\n");
                printf("n = %d\n", n);
                break;
            case '2':
                index = removerPaciente();
                if (index >= 0)
                    v = removerElementoArray(v, n, index);
                break;
            case 'L':
                clrscr();
                break;
        }
    } while (opcao != 'X');

    return 0;
}
