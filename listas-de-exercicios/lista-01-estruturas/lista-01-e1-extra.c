/* 
    OBS.: Utiliza alocação dinâmica de memória.
 */

#include <stdio.h>
#include <stdlib.h> // malloc(), free()

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int main()
{
    int dia, mes, ano;
    Data *data;

    printf("Entre com um dia, mes e ano [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Validação "genérica"
    if (dia < 1 || dia > 31 || mes < 1 || mes > 31 || ano < 1)
    {
        printf("Valor(es) invalido(s)!\n");
        return 1;
    }

    data = (Data *) malloc(sizeof (Data));
    if (data == NULL)
    {
        printf("Memoria insuficiente ou indisponivel!\n");
        return 2;
    }

    data->dia = dia;
    data->mes = mes;
    data->ano = ano;

    printf("\n%02d/%02d/%04d\n", data->dia, data->mes, data->ano);

    // Libera a memória alocada pelo malloc().
    free(data);

    return 0;
}
