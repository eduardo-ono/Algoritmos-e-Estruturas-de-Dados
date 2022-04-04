
<h2></h2>
<h5>Estrutura de Dados > Listas de Exercícios</h5>
<h1></h1>

<h1 align="center">
Lista 1 - Estruturas
</h1>

<h4 align="center">
  Prof. Eduardo Ono
</h4>

<br>

## Exercícios

1. Considere a estrutura `Data` definida a seguir. Escreva um programa que leia uma data no formato `dd/mm/aaaa` e armazene as informações como um registro do tipo `Data`. O programa deverá validar a entrada (1 &le; dia &le; 28, 30 ou 31, dependente do mês, 1 &le; mês &le; 12 e ano > 1). O programa deverá imprimir em seguida a data no formato `dd/mm/aaaa`.

    ```c
    typedef struct {
      int dia;
      int mes;
      int ano;
    } Data;
    ```

<br>
