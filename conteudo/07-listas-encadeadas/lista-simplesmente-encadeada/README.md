<table>
<tr>
<td align="left" width="8000">
  <small>Estrutura de Dados > Conteúdo > Listas Encadeadas</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;17/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">

Listas Simplesmente Encadeadas

</h1>

<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Conceitos

* Lista Simplesmente Encadeada = Lista Encadeada Simples = Lista Simplesmente Ligada

<br>

## Definição da Estrutura NÓ

```c
typedef struct no {
    Info info;
    struct no *prox;
} NO;
```

<br>

## Inserindo um Nó (Elemento) na Lista

### Inserir no Início da Lista

1. Requisitos: Lista do tipo No (`lista` aponta para o primeiro elemento da lista), registro com os dados a serem atribuídos ao novo Nó;

1. Alocar espaço na memória "heap" para o novo Nó (novo elemento da lista);

1. Verificar se a alocação foi realizada corretamente. Caso não tenha sido, interromper a inserção;

1. Popular o membro `ìnfo` do Nó com os dados do registro do tipo `Info`;

1. Se a lista estiver vazia, atribuir `NULL` para o membro `prox` do novo Nó;

1. Se a lista não estiver vazia, atribuir "head" ao membro `prox` do novo Nó (novo Nó irá apontar para o primeiro elemento da lista).

1. Atribuir novo Nó ao "head" ("head" irá apontar para o novo Nó); 

<br>

### Função para inserir um novo Nó no início de uma lista encadeada:

```c
No* inserirNoInicioDaLista(No *lista, Info info)
{
    No *novoNo;

    novoNo = (No*) malloc(sizeof *novoNo);
    if (novoNo == NULL)
        return lista;
    novoNo->info = info;
    if (lista == NULL)
        novoNo->prox = NULL;
    else
        novoNo->prox = lista;
    lista = novoNo;

    return lista;
}
```

<br>

### Inserir no Final da Lista

1. Alocar espaço na memória "heap" para o novo Nó (novo elemento da lista);

1. Verificar se a alocação foi realizada corretamente;

1. Popular o membro `ìnfo` do Nó com os dados do registro do tipo `Info`;

1. Fazer o campo `prox` do Nó apontar para `NULL` (significa ser o último Nó da lista);

1. Se a lista estiver vazia, apontar o "head" para o novo Nó;

1. Se a lista não estiver vazia, buscar o último elemento da lista. Supondo `p` apontando para o último elemento, fazer `p->prox` apontar para o novo Nó;

<br>

* ### Função para adicionar um novo Nó no fim de uma lista encadeada:

```c
No* adicionarNoFimDaLista(No *lista, Info info)
{
    No *novoNo, *p = lista;

    novoNo = (No*) malloc(sizeof *novoNo);
    if (novoNo == NULL)
        return lista;
    novoNo->info = info;
    novoNo->prox = NULL;
    if (lista == NULL)
        lista = novoNo;
    else
    {
        while (p->prox != NULL)
            p = p->prox;
        p->prox = novoNo;
    }

    return lista;
}
```

<br>

### Remover um nó de uma posição da lista


<br>
