
<table>
<tr>
<td align="left" width="8000">
<small>Estrutura de Dados > Listas de Exercícios</small>
</td>
<td align="right">
<small>Atualizado&nbsp;em:&nbsp;04/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista 7 - Filas
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Informações

* Para os exercícios a seguir, considere definida a seguinte estrutura:

  ```c
  typedef struct no {
    Info info;
    struct no *prox;
  } No;
  ```

## Exercícios

1. #### A Engenheira de Software [_Saldina Nurak_](https://ba.linkedin.com/in/codebeauty) (Google, Meta, EVONA) iniciou em 2020 um canal no YouTube chamado [_CodeBeauty_](https://www.youtube.com/channel/UCl5-BV9aRaeDVohpE4sqJiQ), sobre ensino de programação. Em 2021, em um de seus vídeos, ela atribuiu uma tarefa que consistiu na implementação de uma agenda eletrônica, utilizando e estrutura de dados fila. A melhor e mais criativa solução recebeu uma menção ("shoutout") no vídeo seguinte[.](https://www.youtube.com/watch?v=iPq1ZTe8QtA&t=788s) O Prof. Ono deu a sua contribuição e postou uma [solução](https://www.youtube.com/watch?v=jaK4pn1jXTo&t=529s&lc=UgyM-knAQ03a-aBRzZB4AaABAg), que pode ser encontrada nos comentários do vídeo.<br>Com base no programa postado (em linguagem C++), implemente uma versão equivalente em linguagem C.

* Solução postada:

```cpp
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int showMenu(string menuItens[], const int N)
{
    cout << endl;
    cout << "----- MENU -----" << endl;
    for (int i = 0; i < N; i++)
        cout << "[" << i << "] " << menuItens[i] << endl;
    cout << "Option: ";
    int option = 0;
    cin >> option;
    cin.ignore();
    cout << endl;

    return option;
}

void printQueue(queue<string> queue)
{
    if (queue.empty())
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
```

<br>
