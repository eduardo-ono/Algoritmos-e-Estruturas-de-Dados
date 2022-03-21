> ##### Estrutura de Dados > Conteúdo

# Vetores/Arrays Estáticos

Prof. Eduardo Ono

<br>

## Conceitos

* Vetores Estáticos não podem ter seu tamanho alterados em tempo de execução.

<br>

## Exemplos

```c
int main()
{
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19};
    float medidas[]; // ERRO!

    return 0;
}
```

<br>
