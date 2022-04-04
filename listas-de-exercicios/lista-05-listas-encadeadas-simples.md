
<table>
<tr>
<td align="left" width="8000">
<small>Estrutura de Dados > Listas de Exercícios</small>
</td>
<td align="right">
<small>Atualizado&nbsp;em:&nbsp;04/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista 5 - Listas Simplesmente Encadeadas
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Informações

* Para os exercícios a seguir, considere definida a seguinte estrutura:

  ```c
  typedef struct no {
    Info info;
    struct no *prox;
  } No;
  ```

<br>

## Exercícios

1. Escreva uma função que retorne o número de elementos (nós) de uma lista encadeada simples apontada por `lista`. O protótiopo da função deverá ser:

    ```c
    int list_size(No *lista);
    ```

2. Escreva uma função que inverta a ordem de uma lista encadeada simples apontada por `lista` (ou seja, o primeiro nó passa a ser o último, o segundo passa a ser o penúltimo, etc.). Nenhum nó auxiliar deverá ser criado.

3. Escreva uma função que faça uma cópia de uma lista simplesmente encadeada em uma segunda lista.

4. Considere uma lista simplesmente encadeada que armazena apenas números inteiros e que os elementos estejam ordenados em ordem crescente. Escreva uma função que remove todos os elementos (nós) com valor "v" (fornecido pelo usuário) da lista. Caso nenhum elemento com este valor seja encontrado, a função deve retornar 0 (zero), caso contrário, deverá retornar o número de nós removidos.

5. Considere uma lista simplesmente encadeada que armazena apenas números inteiros. Escreva uma função que verifica se os elementos dessa lista estão em ordem crescente. Em caso afirmativo, a função deverá retornar `true`. Caso contrário, deverá retornar `false`.<br>OBS.: Para utilizar valores booleanos, inclua no programa a biblioteca `<stdbool.h>`, disponível no padrão C99 em diante, que define o tipo `bool` e os valores `true` e `false`.

<br>

## Referências

* https://www.ic.unicamp.br/~islene/mc202/lista1.pdf

* https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html

 <br>
