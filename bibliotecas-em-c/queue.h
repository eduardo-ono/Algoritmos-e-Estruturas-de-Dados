#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H

#ifndef INFO
#define INFO int
#endif

typedef struct no {
    INFO info;
    struct no *prox; 
} No;

// Protótipos/assinaturas das funções.
// No VS Code, posicione o cursor sobre o nome da função e pressione F12 para abrir a definição da função.

bool queue_isEmpty(No **);
int queue_size(No **);
void enqueue(No **, INFO);
INFO dequeue(No **);

#endif
