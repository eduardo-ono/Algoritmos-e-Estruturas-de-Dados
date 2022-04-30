/*
Programa      : arrayList
Versão        : 1.0
Descrição     : Biblioteca para vetores dinâmicos.
Desenvolvedor : Eduardo Ono
Criado em     : 11/03/2022
Atualizado em : 30/04/2022
Comentários   :
*/

#include <stdlib.h>

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#ifndef INFO
#define INFO int
#endif

INFO* adicionarNoFimArray(INFO *v, int *, INFO);
INFO* removerElementoArray(INFO *v, int *, int);

#endif
