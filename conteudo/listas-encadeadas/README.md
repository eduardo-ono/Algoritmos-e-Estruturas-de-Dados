> ##### Estrutura de Dados > Conteúdo

# Listas Encadeadas (Listas Ligadas)

Prof. Eduardo Ono

<br>

## Inserindo Elementos na Lista

### Inserindo no Fim da Lista

1. Alocar na memória heap espaço para o novo nó (novo elemento da lista):

    ```c
    No *novoNo = malloc(sizeof (No));
    ```

    ou

    ```c
    No *novoNo = malloc(sizeof *novoNo);
    ```

    ou

    ```c
    No *novoNo = (No*) malloc(sizeof (No));
    ```

    ou

    ```c
    No *novoNo = (No*) malloc(sizeof *novoNo);
    ```

1. Verificar se a alocação foi realizada corretamente:

    ```c
    if (p == NULL) return lista;
    ```

1. Atribuir os dados ao campo data do No:

    ```c
    p->data = data;
    ```

1. Fazer o campo `prox` apontar para `NULL` (significa ser o último nó da lista):

    ```c
    novoNo->prox = NULL;
    ```

1. Se a lista estiver vazia, apontar o "head" para o novo nó:

    ```c
    if (lista == NULL) lista = novoNo;
    ```

1. Se a lista não estiver vazia, buscar o último elemento da lista (supondo aqui que `p` esteja apontando para o início da lista):

    ```c
    while (p->prox != NULL) p = p->prox;
    ```

1. Fazer p->prox apontar para o novo nó:

    ```c
    p->prox = novoNo;
    ```

* #### Função para inserir um novo nó no fim de uma lista encadeada:

```c
No* inserirNoFimLista(No *lista, Data data)
{
    No *novoNo, *p = lista;

    novoNo = malloc(sizeof *novoNo);
    if (novoNo == NULL)
        return lista;
    novoNo->data = data;
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
