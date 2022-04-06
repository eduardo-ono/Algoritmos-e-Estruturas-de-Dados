#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

int main()
{
    Data nascimento;
    Data *obito;

    int dia, mes, ano;

    printf("Entre com o dia, mes e ano do nascimento [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

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

    nascimento.dia = dia;
    nascimento.mes = mes;
    nascimento.ano = ano;

    printf("Entre com o dia, mes e ano do obito [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

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

    obito = (Data *) malloc(sizeof (Data));
    if (obito == NULL)
        return 2;

    obito->dia = dia;
    obito->mes = mes;
    obito->ano = ano;

    printf("%02d/%02d/%04d\n", nascimento.dia, nascimento.mes, nascimento.ano);
    printf("%02d/%02d/%04d\n", obito->dia, obito->mes, obito->ano);

    free(obito);

    return 0;
}








