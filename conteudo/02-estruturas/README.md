> Estrutura de Dados > Conteúdo

# Estruturas (struct)

Prof. Eduardo Ono

<br>

## Tópicos

### [Fundamentos](./fundamentos.md)

### Implementação em C

* struct

```c
struct data {
    int dia;
    int mes;
    int ano;
};
```

* Criando uma variável do tipo `struct data`:

```c
struct data independencia;

independencia.dia = 7;
independencia.mes = 9;
independencia.ano = 1822;
printf("%02d/%02d/04%d\n", independencia.dia, independencia.mes, independencia.ano);
// --> 07/09/1822
```

* Usando o `typedef`:

```c
struct data {
    int dia;
    int mes;
    int ano;
};

typedef struct data Data;
```

* Outra possibilidade mais comum doe uso do `typedef`:

```c
typedef struct data {
    int dia;
    int mes;
    int ano;
} Data;
```

* OBS.: Não há obrigatoriedade de nomear a `struct` com o `typedef`:

```c
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
```

* Criando uma variável do tipo `Data`:

```c
Data independencia; // Não mais "struct data independencia" 

independencia.dia = 7;
independencia.mes = 9;
independencia.ano = 1822;
printf("%02d/%02d/04%d\n", independencia.dia, independencia.mes, independencia.ano);
// --> 07/09/1822
```

<br>
