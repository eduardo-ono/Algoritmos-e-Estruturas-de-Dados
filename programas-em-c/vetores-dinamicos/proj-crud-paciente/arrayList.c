#include "paciente.h"

typedef Paciente Data;

Data* adicionarNoFimArray(Data v[], int *v_length, Data data)
{
    int n = *v_length;

    if (v == NULL || n == 0) // Se o vetor estiver vazio
    {
        v = (Data*) malloc(sizeof *v);
    }
    else
    {
        v = (Data*) realloc(v, (n + 1) * sizeof *v);
    }
    if (v == NULL)
        return NULL;

    v[n] = data;
    (*v_length)++;

    return v;
}

Data* removerElementoArray(Data v[], int *v_length, int index)
{
    int i, n = *v_length;
    Data *p;

    // Validaçao do index
    if (index < 0 || index >= n)
        return v;

    if (index == 0)
    {
        p = &v[0];
        v = &v[1];
        free(p);
    }
    else
    {
        for (i = index; i < n-1; i++)
            v[i] = v[i+1];
        p = &v[n-1];
        free(p);
    }
    (*v_length)--;

    return v;
}
