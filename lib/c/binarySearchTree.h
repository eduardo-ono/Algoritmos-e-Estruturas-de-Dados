#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#ifndef INFO
#define INFO int
#endif

typedef struct no
{
    INFO info;
    struct no *esq;
    struct no *dir;
} NO;

NO *bst_add(NO *arvore, INFO info);

#endif
