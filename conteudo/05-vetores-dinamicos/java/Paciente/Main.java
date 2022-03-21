
import java.util.List;
import java.util.ArrayList;

/**
 * @author Eduardo
 */
public class Main {

	public static void main(String[] args)
	{
		// Cria uma lista encadeada do tipo Paciente
		List<Paciente> lista = new ArrayList<>();

		// Inserir elemento na lista (exemplo 1)
		Paciente paciente = new Paciente( "Fulano de Tal", 65.0, 1.71 );
		lista.add(paciente);

		// Inserir elemento na lista (exemplo 2)
		paciente = new Paciente("Ciclano de Tal", 74.0, 1.80);
		lista.add(paciente);

		// Inserir elemento na lista (exemplo 3)
		lista.add(new Paciente("Beltrano de Tal", 71.0, 1.78));

		// Inserir novo elemento na lista
		paciente = new Paciente();
		paciente.cadastrarNovoPaciente();
		lista.add( paciente );

		paciente = lista.get(0);
		System.out.println(paciente.formatarDados());

		System.out.println("lista = " + lista + "\n");
		
		imprimirTodosElementos(lista);
	}

	private static void imprimirTodosElementos(List<Paciente> lista)
	{
		for (Paciente elemento : lista)
		{
			System.out.print(elemento.formatarDados());
		}
	}
}
