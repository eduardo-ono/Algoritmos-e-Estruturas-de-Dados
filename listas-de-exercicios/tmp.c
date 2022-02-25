#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

int main()
{
    struct data nascimento;

    nascimento.dia = 25;
    nascimento.mes = 02;
    nascimento.ano = 2022;
    printf("%02d/%02d/%04d\n", nascimento.dia, nascimento.mes, nascimento.ano);
}
