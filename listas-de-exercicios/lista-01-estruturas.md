<table>
<tr>
<th></th>
</tr>
<tr>
<td align="left" width="100%" height="1">
<!-- <img width="5000" height="0"> -->
<h5>Estrutura de Dados > Listas de Exercícios</h5>
</td>
<td align="right" width="auto" height="1">
<!-- <img width="auto" height="0"> -->
<h5>Prof.&nbsp;Eduardo&nbsp;Ono</h5>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista 1 - Estruturas
</h1>

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
