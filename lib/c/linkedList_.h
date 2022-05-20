//---------------------------------------------------------------------------
// RENOMEAR ESTE ARQUIVO, REMOVENDO O ÚLTIMO CARACTERE '_' DO NOME
//---------------------------------------------------------------------------

#include <stdlib.h>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#ifndef INFO
#define INFO int
#endif

typedef struct no
{
    INFO info;
    struct no *prox;
} No;

// Protótipos das funções.
// No VS Code, posicione o cursor sobre o nome da função e pressionando F12 para ser levado até a definição da função.

int linkedList_size(No *); 
No* linkedList_clear(No *);
INFO linkedList_get(No *, int pos);
No* linkedList_inserirNoInicio(No *, INFO);
No* linkedList_inserirNoFim(No *lista, INFO info);
No *linkedList_removerDoInicio(No *lista);
No *linkedList_removerDoFim(No *lista);
No *linkedList_removerDoIndex(No *lista, int idx);

#endif
