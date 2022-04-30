#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "../../../lib/c/util.h"
#include "../../../lib/c/util.c"
#include "../../../lib/c/arrayList.h"
#include "../../../lib/c/arrayList.c"
#include "menu.c"
#include "lib.c"

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
                    printf("--> ERRO na inclus%co do paciente!\n", 198);
                printf("n = %d\n", n);
                break;
            case '2':
                index = removerPaciente();
                if (index >= 0)
                    v = removerElementoArray(v, &n, index);
                break;
            case '3':
                printf("--> Ainda n%co impelementada!\n", 198);
                break;
            case '4':
                v = limparArray(v, &n);
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
            default:
                printf("--> Op%c%cao inv%clida!\n", 135, 198, 160);
        }
    } while (opcao != 'X');

    return 0;
}
