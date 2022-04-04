<table>
<tr>
<!-- <th width="100%" height="0">
</th>
<th width="auto" height="0">
</th> -->
</tr>
<tr>
<td align="left">
<small>Estrutura de Dados > Listas de Exercícios</small>
<img width="5000" height="1">
</td>
<td align="right">
<small>Prof.&nbsp;Eduardo&nbsp;Ono</small>
<img width="auto" height="1">
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
