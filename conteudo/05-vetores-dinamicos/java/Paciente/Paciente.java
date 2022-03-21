/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author lab4h
 */
public class Paciente
{
	// Atributos
	private String nome = "";
	private double peso = 0;
	private double altura = 0;
	private double imc = 0;
	private static int contador = 0;

	// Construtores
	Paciente()
	{
		contador++;
	}

	Paciente( String nome, double peso, double altura )
	{
		this.setNome( nome );
		this.setPeso( peso );
		this.setAltura( altura );
		this.setImc();
		contador++;
	}

	// Métodos
	public String getNome() { return nome; }
	public double getPeso() { return peso; }
	public double getAltura() { return altura; }
	public double getImc() { return imc; }
	public int getContador() { return contador; }

	public void setNome( String nome )
	{
		this.nome = nome;
	}

	public void setPeso( double peso )
	{
		if ( peso > 0 )
		{
			this.peso = peso;
			setImc();
		}
	}

	public void setAltura( double altura )
	{
		if ( altura > 0 )
		{
			this.altura = altura;
			setImc();
		}
	}

	public void setImc()
	{
		if ( peso > 0 && altura > 0 )
			this.imc = this.peso / ( this.altura * this.altura );
	}

	public String formatarDados()
	{
		String str = this.getNome() + "  " +
			this.getPeso() + "  " +
			this.getAltura() + "  " +
			String.format( "imc = %.3f", this.getImc() ) +
			"\n";
		
		return str;
	}

	public void cadastrarNovoPaciente()
	{
		Scanner entrada = new Scanner( System.in );
		System.out.print( "Nome do paciente: " );
		setNome( entrada.nextLine() );
		System.out.print( "Peso [kg]: " );
		setPeso( Double.parseDouble( entrada.nextLine() ) );
		System.out.print( "Altura do paciente: " );
		setAltura( Double.parseDouble( entrada.nextLine() ) );
	}

}
