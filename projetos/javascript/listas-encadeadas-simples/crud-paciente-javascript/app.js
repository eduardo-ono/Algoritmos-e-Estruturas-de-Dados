class Info {
  constructor(nome, peso, altura) {
    this.nome = nome;
    this.peso = peso;
    this.altura = altura;
    this.imc = peso / altura ** 2;
  }
} // class Info

class NO {
  constructor(info, prox = null) {
    this.info = info;
    this.prox = prox;
  }
} // class NO

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0; // Número de elementos da lista
  }

  // Insere nó no início da lista.
  inserirNoInicio(info) {
    this.head = new NO(info, this.head);
    this.size++;
  }

  // Insere nó no fim da lista.
  inserirNoFim(info) {
    let novoNo = new NO(info);
    let p;
    // Se a lista estiver vazia
    if (this.head == null) {
      this.head = novoNo; // head aponta para o objeto novoNo
    }
    else {
      p = this.head;
      // Percorre a lista até encontrar o último elemento, cujo campo "prox" aponta para null.
      while (p.prox != null) {
        p = p.prox;
      }
      p.prox = novoNo; 
    }
    this.size++;
  }

  // Remove o nó armazenado na posição "index" (idx) da lista.
  removerDaPosicao(idx) {
    // Validação do idx
    if (idx < 0 || idx >= this.size)
      return;

    let p = this.head;
    let prev; // "Ponteiro" para e nó anterior a "p" ("aponta" para o nó anterior ao nó apontado por "p")
    // Remove o nó do início da lista (idx == 0)
    if (idx === 0) {
      this.head = p.prox;
    }
    else { // Remove o no da posição "idx"
      for (let i = 0; i < idx; i++) {
        prev = p;
        p = p.prox;
      }
      prev.prox = p.prox; // O nó apontado por "prev" (anterior ao apontado por "p") aponta para o nó posterior ao nó apontado por "p", que será removido da lista
    }
    this.size--;
  }

  // Imprime as informações armazenadas na lista.
  imprimir() {
    let p = this.head;
    for (let i = 0; p !== null; i++) {
      console.log(`idx = ${i}`);
      console.log(p.info);
      p = p.prox;
    }
  }
} // class LinkedList

const lista = new LinkedList();
lista.inserirNoFim(new Info('Ciclano de Tal', 83, 1.78));
lista.inserirNoFim(new Info('Beltrano de Tal', 68, 1.71));
lista.inserirNoInicio(new Info('Fulano de Tal', 81, 1.74));
lista.inserirNoFim(new Info('Mengano de Tal', 76, 1.66));
lista.removerDaPosicao(3);
// console.log(lista);
lista.imprimir();
