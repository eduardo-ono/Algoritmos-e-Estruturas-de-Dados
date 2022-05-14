class Info {
  constructor(nome, peso, altura) {
    this.nome = nome;
    this.peso = peso;
    this.altura = altura;
    this.imc = peso / altura ** 2;
  }
}

class NO {
  constructor(info, prox = null) {
    this.info = info;
    this.prox = prox;
  }
}

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

  // Imprime as informações armazenadas na lista.
  imprimir() {
    let p = this.head;
    while (p !== null) {
      console.log(p.info);
      p = p.prox;
    }
  }
}

const lista = new LinkedList();
lista.inserirNoFim(new Info('Fulano de Tal', 68, 1.71));
lista.inserirNoFim(new Info('Ciclano de Tal', 83, 1.78));
// console.log(lista);
lista.imprimir();
