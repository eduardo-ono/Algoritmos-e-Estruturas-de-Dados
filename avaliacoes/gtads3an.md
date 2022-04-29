<table>
<tr>
<td align="left" width="8000">
  <small>Estrutura de Dados</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;28/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista de Exercícios Adicional
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Instruções para os exercícios

&nbsp;&nbsp;&nbsp;&nbsp;No final da lista, consta uma relação de várias estruturas `struct` numeradas de 0 a 9. Em cada exercício deverá ser utilizada uma dessas estruturas, correspondendo ao último dígito de seu RA.

<br>

## Exercício 1

&nbsp;&nbsp;&nbsp;&nbsp;Escreva um programa do tipo "CRUD" utilizando vetores dinâmicos e a estrutura especificada pelo seu RA. O programa deverá apresentar um menu com as seguintes opções:

* Listar todos os produtos cadastrados;
* Cadastrar um novo produto; // "Create"
* Buscar por informação de um campo específico; // "Read"
* Atualizar/modificar os dados de um produto; // "Update"
* Remover um produto; // "Delete"
* Limpar lista (com confirmação) // Apaga todos os registros
* Importar dados de um arquivo no formato CSV;
* Exportar dados para um arquivo no formato CSV; 
* Limpar a tela;
* Sair do progrma.

&nbsp;&nbsp;&nbsp;&nbsp;Para a busca por um campo específico, o programa deverá apresentar um "submenu", contendo as opções de busca (marca, modelo, etc.).

  OBS.: O nome do vetor dinâmico deverá ser o nome do tipo da `struct` utilizada, no plural, com todos os caracteres em minúsculo.

  Exemplo:

```c
int main()
{
    Impressora *impressoras = NULL; // Declaração e inicialização de um vetor dinâmico

    // ...

    return 0;
}
```
<br>

&nbsp;&nbsp;&nbsp;&nbsp;Deverá ser realizado o cadastro de, pelo menos, 10 produtos (podem ser fictícios, porém consistentes), sendo que o cadastro deverá ser exportado para um arquivo no formato CSV e entregue junto com o programa.

<br>

## Exercício 2

&nbsp;&nbsp;&nbsp;&nbsp;O mesmo que o Exercício 1, porém, utilizando uma lista encadeada simples no lugar do vetor dinâmico.

<br>

## Estruturas a serem utilizadas nos Exercícios 1 e 2

0. Processador

```c
typedef struct {
    char marca[30];
    char modelo[30];
    int ano_lancamento;
    float clock; // GHz
    bool iGPU; // Possui ou não GPU integrada
} Processador;
```

1. Memória RAM

```c
typedef struct {
    char marca[30];
    char modelo[30];
    bool so-dimm; // DIMM = 0 (default) e SO-DIMM = 1
    char tecnologia[5]; // DDR3, DDR4, DDR5, etc.
    int frequencia; // MHz (2400, 2666, 3200, 4800, etc.)
} Memoria; // RAM
```

2. Armazenamento

```c
typedef struct {
    char marca[30];
    char modelo[30];
    char formato[10]; // 2.5", M.2
    bool sata; // Default = 0, SATA = 1
    int capacidade; // GB
} SSD;
```

3. Monitor

```c
typedef struct {
    char marca[30];
    char modelo[50];
    int tamanho; // polegada
    char resolucao[30]; // 1920x1080 (Full HD), 4K, etc.
    bool curvo; // 0 = default
}
```

4. Impressora

```c
typedef struct {
    char marca[30];
    char modelo[30];
    char tipo; // (C)artucho de tinta ou (T)oner
    int capacidade_mensal; // num. folhas por mês
} Impressora;
```

5. Sistema Operacional

```c
typedef struct {
    char marca[30];
    char modelo[30];
    int ano_lancamento;
    enum os = { WINDOWS, LINUX, MACOS };
    bool arquitetura; // 0 = 64-bit (default), 1 = 32-bit
} SO;
```

6. Fonte

```c
typedef struct {
    char marca[30];
    char modelo[30];
    bool certificada; // default = 1
    int potencia; // Watts
    int tam_fan; // cm 
} Fonte;
```

7. Teclado

```c
typedef struct {
    char marca[30];
    char modelo[30];
    bool mecanico; // 0 = membrana, 1 = mecânico
    char padrao[6]; // ENG, ABNT, ABNT2
    bool retroiluminado; // 0 = default
} Teclado;
```

8. Mouse

```c
typedef struct {
    char marca[30];
    char modelo[30];
    char conexao; // (F)io, (W)i-Fi, (B)luetooth
    bool gamer; // 0 = default
    int num_botoes;
} Mouse;
```


9. Caixa de Som

```c
typedef struct {
    char marca[30];
    char modelo[30];
    char saida[10] ; // 2.0, 2.1, 5.1, etc.
    int potencia; // Watts
    bool portatil; // 0 = default
} CaixaSom;
```

Samuel.

```c
typedef struct {
    char marca[30];
    char modelo[30];
    char tipo[30]; // acústico, eletroacústico
    int ano_fabricacao;
    bool cutaway; // default = 0
    int cor; // 0xRRGGBB - O usuário deve entrar a cor no formato decimal RGB (8-bit). Exemplo: 255, 255, 0 (amarelo)
} Violao;
```

<br>
