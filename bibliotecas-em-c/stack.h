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

// Protótipos/assinaturas das funções.
// No VS Code, posicione o cursor sobre o nome da função e pressionando F12 para ser levado até a definição da função.

bool stack_isEmpty(No *);
int stack_size(No *);
void stack_clear(No **);
void stack_push(No **, INFO);
INFO stack_pop(No **);

#endif
