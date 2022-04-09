<table>
<tr>
<td align="left" width="8000">
    <small>Estrutura de Dados > Avaliações</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;09/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
    Prova 1 - Gabarito
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Questão 1

| _n_ | Cálculos | _v_ | x |
| :-: | --- | --- | :-: |
| 1 | 2 x 0 / 1 | 0 | 0 
| 2 | 2 x 0 / 2 <br> 2 x 1 / 2 | 0 1 | 1 
| 3 | 2 x 0 / 3 <br> 2 x 1 / 3 <br> 2 x 2 / 3 | 0 0 1 | 1
| 4 | 2 x 0 / 4 <br> 2 x 1 / 4 <br> 2 x 2 / 4 <br> 2 x 3 / 4 | 0 0 1 1 | 2
| 5 | 2 x 0 / 5 <br> 2 x 1 / 5 <br> 2 x 2 / 5 <br> 2 x 3 / 5 <br> 2 x 4 / 5 | 0 0 0 1 1 | 2
| ... | ... | ... | ...
| _n_ | 2 x 0 / _n_ <br> ... <br> 2 x (_n_-1) / _n_ | (_n_ / 2) + (_n_ % 2) zeros e (_n_ / 2) uns | _n_ / 2

Resposta: x = _n_ / 2 (divisão inteira).

<br>

## Questão 2

Possíveis soluções:

```c
struct pessoa {
    char nome[100]; // O tamanho da _string_ não importa para a questão
    int dia;
    int mes;
    int ano;
    float peso;
    float altura;
};
```

```c
struct data {
    int dia;
    int mes;
    int ano;
};

struct pessoa {
    char nome[100];
    struct data data_nascimento;
    float peso;
    float altura;
};
```

```c
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

struct pessoa {
    char nome[100];
    Data data_nascimento;
    float peso;
    float altura;
};
```

```c

// A que mais se aproxima do conceito de "classe" em POO. 

// Define o tipo "Data".
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Define o tipo "Pessoa".
typedef struct {
    char nome[100];
    Data data_nascimento;
    float peso;
    float altura;
} Pessoa;
```

<br>

## Questão 3

* A função retorna o tempo total em segundos da _playlist_, ou seja, a soma do tempo de duração de todas as músicas armazenadas na lista em segundos.

<br>

## Questão 4

* Supondo o RA = 123456789.

| Instrução | _v_ após execução da intrução |
| --- | --- |
| `for (int i = 0; i < 6; i ++)`<br>&nbsp;&nbsp;&nbsp;&nbsp;`dequeue(v);` | 789
| `enqueue(v, 2);` | 7892
| `enqueue(v, 5);` | 78925

<br>

## Questão 5

* a) A que apresenta melhor desempenho para o armazenamento é a __pilha__, uma vez que para a leirura o desempenho é o mesmo para a fila.<br>Na pilha, todo novo elemento (nó) é inserido no início, ou seja, o tamanho da pilha não importa (T(_n_) = _O_(1)). Na fila, um ponteiro auxiliar deve percorrer toda a lista até encontrar o último nó, para que o novo nó seja inserido no final da lista. Na fila, o desempenho linearmente dependente do tamanho da lista (T(_n_) = _O_(_n_)).

* b) Supondo o RA = 123456789.

```c
void armazenarNaPilha(No **pPilha)
{
    push(pPilha, 9);
    push(pPilha, 8);
    push(pPilha, 7);
    push(pPilha, 6);
    push(pPilha, 5);
    push(pPilha, 4);
    push(pPilha, 3);
    push(pPilha, 2);
    push(pPilha, 1);
}
```

ou

```c
No* armazenarNaPilha(No *pilha)
{
    pilha = push(pilha, 9);
    pilha = push(pilha, 8);
    pilha = push(pilha, 7);
    pilha = push(pilha, 6);
    pilha = push(pilha, 5);
    pilha = push(pilha, 4);
    pilha = push(pílha, 3);
    pilha = push(pilha, 2);
    pilha = push(pilha, 1);

    return pilha;
}
```

<br>

* c)

```c
void imprimirRA(No* lista)
{
    int cont = 0;

    while (lista != NULL)
    {
        printf("%d", lista->info);
        cont++;
    }
    printf("\nTamanho = %d\n", cont);
}
```

<br>
