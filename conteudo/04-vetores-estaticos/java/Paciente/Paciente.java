public class Paciente {
    public String nome;
    public double peso;
    public double altura;
    public double imc;

    Paciente(String nome, double peso, double altura) {
        this.nome = nome;
        this.peso = peso;
        this.altura = altura;
        this.imc = peso /(altura * altura);
    }
}
