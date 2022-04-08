<table>
<tr>
  <td align="left" width="8000">
    <small>Estrutura de Dados > Listas de Exercícios</small>
  </td>
  <td align="right">
    <small>Atualizado&nbsp;em:&nbsp;05/04/2022</small>
  </td>
</tr>
</table>

<br>

<h1 align="center">
  Lista 1 - Estruturas
</h1>
<h4 align="center">
  Prof. Eduardo Ono
</h4>

<br>

## Exercícios

1. Considere a estrutura `Data` definida a seguir. Escreva um programa que leia uma data no formato `dd/mm/aaaa` e armazene as informações como um registro do tipo `Data`. O programa deverá validar a entrada (1 &le; dia &le; 31, 1 &le; mês &le; 12 e ano > 1). Em seguida, o programa deverá imprimir a data no formato `dd/mm/aaaa`.

    ```c
    typedef struct {
      int dia;
      int mes;
      int ano;
    } Data;
    ```

    <details>
      <summary>
        <strong>Resolução</strong>
      </summary>
      <section markdown="1">
      <sup><h2></h2></sup>
      
      ```c
      int main()
      {
          Data data;

          int dia, mes, ano;

          printf("Entre com o dia, mes e ano do nascimento [dd/mm/aaaa]: ");
          scanf("%d/%d/%d", &dia, &mes, &ano);

          // Validação da entrada.
          if (dia < 1 || dia > 31)
          {
              printf("Dia invalido!\n");
              return 1;
          }
          if (mes < 1 || mes > 12)
          {
              printf("Mes invalido!\n");
              return 1;
          }
          if (ano < 1)
          {
              printf("Ano invalido!\n");
              return 1;
          }

          data.dia = dia;
          data.mes = mes;
          data.ano = ano;

          printf("\n%02d/%02d/%04d\n", data.dia, data.mes, data.ano);

          return 0;
      }
      ```

      </section>
    </details>

<br>
