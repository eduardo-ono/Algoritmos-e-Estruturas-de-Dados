
<sub><hr></sub>
##### [Estrutura de Dados](https://github.com/eduardo-ono/Estrutura-de-Dados) > Listas de Exercícios
<sup><hr></sup>

# Lista 5 - Listas Encadeadas Simples

Prof. Eduardo Ono

<br>

## Introdução

* Para os exercícios a seguir, considere definida a seguinte estrutura:

  ```c
  typedef struct no {
    Info info;
    struct no *prox;
  } No;
  ```

## Exercícios

1. #### Escreva uma função que retorne o número de elementos (nós) de uma lista encadeada simples apontada por `lista`. O protótiopo da função deverá ser:

    ```c
    int list_size(No *lista);
    ```

2. #### Escreva uma função que inverta a ordem de uma lista encadeada simples apontada por `lista` (ou seja, o primeiro nó passa a ser o último, o segundo passa a ser o penúltimo, etc.). Nenhum nó auxiliar severá ser criado.

3. #### Escreva uma função que faça uma cópia de uma lista simplesmente encadeada em uma segunda lista.

4. #### Considere uma lista simplesmente encadeada que armazena apenas números inteiros e que os elementos estejam ordenados em ordem crsecente. Escreva uma função que remove um elemento (nó) com valor `v` da lista. Caso nenhum elemento com este valor seja encontrado, a função deve retornar `0` (zero).

5. #### Considere uma lista simplesmente encadeada que armazena apenas números inteiros. Escreva uma função que verifica se os elementos dessa lista estão em ordem crescente.

<br>

## Referências

* https://www.ic.unicamp.br/~islene/mc202/lista1.pdf

* https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html

 <br>