public class Main {
    public static void main(String[] args) {
        Paciente[] pacientes = new Paciente[10];

        pacientes[0] = new Paciente("Fulano de Tal", 72, 1.74);
        pacientes[0] = null;
        System.out.println(pacientes.length);
        System.out.println(pacientes[1]);
    }
}
