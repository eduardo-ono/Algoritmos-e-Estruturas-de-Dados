//---------------------------------------------------------------------------
// RENOMEAR ESTE ARQUIVO, REMOVENDO O ÚLTIMO CARACTERE '_' DO NOME
//---------------------------------------------------------------------------

#include <stdlib.h>

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#ifndef INFO
#define INFO int
#endif

INFO *array_adicionarNoFim(INFO *, int *, INFO);
INFO *array_removerElemento(INFO *, int *, int);
INFO *array_limpar(INFO *, int *);

#endif
