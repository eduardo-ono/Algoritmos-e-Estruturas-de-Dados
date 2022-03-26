#include "paciente.h"

typedef Paciente Data;

typedef struct no {
    Data data;
    struct no *prox;
} No;

void listarPacientes(Paciente v[], const int N)
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%s  %.1f kg  %.2f m  IMC = %.1f\n",
            v[i].nome, v[i].peso, v[i].altura, v[i].imc);
    }
}

Data* adicionarNoFimArray(No v[], int *n, Data data)
{
    if (v == NULL || *n == 0) // Se o vetor estiver vazio
    {
        v = (Data*) malloc(sizeof *v);
    }
    else
    {
        v = (Data*) realloc(v, (*n + 1) * sizeof *v);
    }
    if (v == NULL)
        return NULL;
    v[*n] = data;
    (*n)++;

    return v;
}
