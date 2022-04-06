> ##### Estrutura de Dados > Listas de Exercícios

# Lista Encadeada Simples

Prof. Eduardo Ono

<br>

* Para os exercícios a seguir, considere as seguintes estruturas:

```c
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int min;
} Horario;

typedef struct {
    char evento[1000];
    Data data;
    Horario horario;

} Evento;

typedef struct no {
    Info info;
    struct no *prox;
} No;
```

1. Implemente uma função para inserir um novo evento no final da lista encadeada.

1. Implemente uma função para inserir um novo evento no início da lista encadeada.
