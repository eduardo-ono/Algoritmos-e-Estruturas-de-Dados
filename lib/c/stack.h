//---------------------------------------------------------------------------
// RENOMEAR ESTE ARQUIVO, REMOVENDO O ÚLTIMO CARACTERE '_' DO NOME
//---------------------------------------------------------------------------

#include <stdbool.h>
#include <stdlib.h>

#ifndef STACK_H
#define STACK_H

#ifndef INFO
#define INFO int
#endif

typedef struct no
{
    INFO info;
    struct no *prox;
} No;

bool stack_isEmpty(No *);
int stack_size(No *);
void stack_clear(No **);
void stack_push(No **, INFO);
INFO stack_pop(No **);

#endif
