/*
Programa      : Agenda Eletrônica
Versão        : 1
Descrição     : Agenda para registro de eventos.
Desenvolvedor : Eduardo Ono
Criado em     : 31/03/2022
Atualizado em : 01/04/2022
Comentários   : Utiliza filas para armazenamento dos eventos.
*/

#include <stdio.h>
#include <stdlib.h>

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

#define Info Evento 

#include "../_lib/stack.c"

int showMenu(char **, const int);

void imprimirPilha(No **pLista)
{
    if (queue_isEmpty())
    {
        cout << "You've finished all your tasks!" << endl;
        return;
    }
    cout << "Tasks:" << endl;
    while (!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }
}

int main()
{
    const int N = 4;
    string menuItens[] = { // "Exit" must be the last option
        "Show tasks",
        "Add task",
        "Delete task",
        "Exit"
    };
    queue<string> myTasks;
    int option;
    do {
        string newTask;
        option = showMenu(menuItens, N);
        switch (option)
        {
            case 0 :
                printQueue(myTasks);
                break;
            case 1 :
                cout << "Enter a new task: ";
                getline(cin, newTask);
                myTasks.push(newTask);
                break;
            case 2:
                if (!myTasks.empty())
                {
                    cout << "Deleting " << myTasks.front() << "..." << endl;
                    myTasks.pop();
                }
                else
                    cout << "No tasks found!" << endl;
                break;
        }
    } while (option != (N-1)); // "Exit" must be the last option
    return 0;
}

int showMenu(char **menuItens, const int N)
{
    int i, option = 0;

    printf("\n");
    printf("----- MENU -----\n");
    for (i = 0; i < N; i++)
        printf("[%d] %s\n", i, menuItens[i]);
    printf("Option: ");
    scanf("%d", &option);

    return option;
}
