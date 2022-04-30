
#include "arrayList.h"

INFO *adicionarNoFimArray(INFO v[], int *v_length, INFO info)
{
    int n = *v_length;

    if (v == NULL || n == 0) // Se o vetor estiver vazio
        v = (INFO *)malloc(sizeof *v);
    else
        v = (INFO *)realloc(v, (n + 1) * sizeof *v);
    if (v == NULL)
        return NULL;
    v[n] = info;
    (*v_length)++;

    return v;
}

INFO *removerElementoArray(INFO v[], int *v_length, int index)
{
    int n = *v_length, i;
    INFO *p;

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
        for (i = index; i < n - 1; i++)
            v[i] = v[i + 1];
        p = &v[n - 1];
        free(p);
    }
    (*v_length)--;

    return v;
}

INFO *limparArray(INFO v[], int *v_length)
{
    free(v);
    *v_length = 0;

    return NULL;
}
