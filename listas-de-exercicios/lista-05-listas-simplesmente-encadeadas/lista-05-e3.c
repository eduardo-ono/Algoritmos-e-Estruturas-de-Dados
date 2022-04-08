#include <stdio.h>
#include <stdlib.h>

#include "../_lib/linkedList.c"

No* copiarLista(No*);

int main()
{

    return 0;
}

No* copiarLista(No *lista1)
{
    No *lista2 = NULL, *p1 = lista1, *p2 = NULL, *novoNo = NULL;

    if (lista1 == NULL)
        return lista2;

    while (p1 !=NULL) {
        // Utiliza a função inserirNoFimDaLista() da biblioteca "linkedList.c".
        lista2 = inserirNoFimDaLista(lista2, p1->info);
        p1 = p1->prox;
    }

    return lista2;
}
