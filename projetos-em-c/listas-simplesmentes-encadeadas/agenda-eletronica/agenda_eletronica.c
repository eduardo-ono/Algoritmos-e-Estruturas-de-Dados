/*
Programa      : Agenda Eletrônica
Versão        : 1
Descrição     : Agenda para registro de eventos.
Desenvolvedor : Eduardo Ono
Criado em     : 31/03/2022
Atualizado em : 18/05/2022
Comentários   : Utiliza filas para armazenamento dos eventos.
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../../lib/c/util.h"
#include "../../../lib/c/util.c"

typedef struct data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct tempo {
    int hora;
    int min;
    int seg;
} Tempo;

typedef struct evento {
    char titulo[100];
    Data data;
    Tempo tempo;

} Evento;

#define INFO Evento 
#include "../../../lib/c/queue.h"
#include "../../../lib/c/queue.c"

void imprimirTarefas(No *lista);

int main()
{
    const int N_MENU = 4;
    char *menuItens[] = { // "Exit" must be the last option
        "[0] Exibir tarefas",
        "[1] Adicionar tarefas",
        "[2] Apagar tarefas",
        "[X] Sair"
    };
    No *agenda = NULL;
    int opcao;
    char tarefa[100];

    do {
        opcao = exibirMenu(menuItens, N_MENU);
        switch (opcao)
        {
            case 0 :
                imprimirTarefas(agenda);
                break;
            case 1 :
                puts("Entre com uma nova tarefa: ");
                gets(tarefa);
                agenda = enqueue(&agenda, info);
                break;
            case 2:
                if (!queue_isEmpty(agenda))
                {
                    puts("Apagando tarefa...");
                    dequeue(agenda);
                }
                else
                    puts("Nenhuma tarefa encontrada!");
                break;
        }
    } while (opcao != 'X'); // "Exit" must be the last option

    return 0;
}

void imprimirTarefas(No *lista)
{
    No *p = lista;
    if (queue_isEmpty(lista))
    {
        puts("Todas as tarefas finalizadas!");
        return;
    }
    puts("Tasks:");
    while (!queue_isEmpty(lista))
    {
        printf("%s\n", p->info.titulo);
        p = p->prox;
    }
}
