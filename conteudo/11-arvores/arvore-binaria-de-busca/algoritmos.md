<table>
<tr>
<td align="left" width="8000">
  <small>Estrutura de Dados > Conteúdo > Árvores > Árvore Binária de Busca</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;13/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Algoritmos - Árvore Binária de Busca
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Fundamentos

Uma BST segue as seguintes regras de inserção de um novo nó:

* Todos os valores da subárvore esquerda são menores do que o valor do nó pai.

* Todos os valores da subárvore direita são maiores do que o valor do nó pai.

<br>

## Inserindo um Nó na Árvore

* Alocar espaço na memória para o novo nó;
* Comparar o valor (informação) do nó a ser inserido com o valor do nó raiz;
* Se o valor for menor que o da raiz vá para a subárvore esquerda;
* Se o valor for maior que o da raiz vá para a subárvore da direita;
* Aplicar o método recursivamente até chegar a um nó folha.


### bst_add()

* Método Iterativo

```c
// int bst_add(NO *raiz) {
//     if (raiz == NULL)
//     {
//         return 0;
//     }
//     No *novoNo;
//     novoNo = (No *) malloc(sizeof *novoNo);
//     if (novoNo == NULL)
//         return 0;
//     novoNo.info = info;
//     novoNo.esq = NULL;
//     novoNo.dir = NULL;

//     if (*raiz == NULL)
//     {

//     }
// }
```

* Método Recursivo

```c
NO *bst_add(NO *arvore, INFO info)
{
    NO *p = arvore;

    if (p == NULL)
    {
        p = (NO *) malloc(sizeof *p);
        p->info = info;
        p->esq = NULL;
        p->dir = NULL;
    }
    else
    {
        if (info < p->info)
            p->esq = bst_add(p->esq, info);
        else
            p->dir = bst_add(p->dir, info);
    }
    return p;
}
```

<br>
