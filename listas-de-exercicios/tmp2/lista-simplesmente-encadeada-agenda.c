#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int min;
} Horario;

typedef struct {
    char descricao[1000];
    Data data;
    Horario horario;
} Evento; // Apontamento

typedef Evento INFO;

typedef struct no {
    INFO info;
    struct no *prox;
} No;

// Protótipos/Assinaturas das funções
No* inserirNoInicioDaLista(No*, Evento);
void imprimirLista(No*);

int main()
{
    Evento evento;
    No *lista = NULL;
    char opcao = 'S';

    do {
        printf("Entre com o evento: ");
        gets(evento.descricao);
        printf("Data [dd/mm/aaaa]: ");
        scanf("%d/%d/%d", &evento.data.dia, &evento.data.mes, &evento.data.ano);
        getchar();
        printf("Horario [hh:mm]: ");
        scanf("%d:%d", &evento.horario.hora, &evento.horario.min);
        getchar();
        lista = inserirNoInicioDaLista(lista, evento);
        imprimirLista(lista);
        printf("Continuar? [S/n]");
        opcao = toupper(getchar());
    } while (opcao != 'N');
    
    return 0;
}

// Implementação das funções

void imprimirLista(No* lista)
{
    No *p = lista;

    while (p != NULL)
    {
        printf("%02d/%02d/%04d ", p->info.data.dia, p->info.data.mes, p->info.data.ano);
        printf("%02d:%02d -->", p->info.horario.hora, p->info.horario.min);
        printf("%s\n", p->info.descricao);
        p = p->prox;
    }
}

No* inserirNoInicioDaLista(No *lista, Evento evento)
{
    return lista;
}
