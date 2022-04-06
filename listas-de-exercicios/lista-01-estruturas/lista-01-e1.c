#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

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
