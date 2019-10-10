//============================================================================
// Name        : Pessoa.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef VEHICLE_H_
#define VEHICLE_H_

// inclus�o de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Pessoa {
	public:
		// se��o de atributos e m�todos p�blicos
		// e construtores e destrutores da classe
		Pessoa(); // construtor padr�o
		Pessoa(std::string n); // construtor alternativo
		Pessoa(std::string n, short i); // construtor alternativo
		Pessoa(std::string n, short i, float a); // construtor alternativo
		~Pessoa(); // destrutor come�a com �~�
		void setNome(std::string n);
		void setIdade(short i);
		void setAltura(float a);
		std::string getNome();
		int getIdade();
		float getAltura();
		void printDados();

	protected:
		// se��o de atributos e m�todos protegidos

	private:
		// se��o de atributos e m�todos privados
		std::string nome;// = NULL;
		short idade;// = 0;
		float altura;// = 0;
};

#endif /* VEHICLE_H_ */
