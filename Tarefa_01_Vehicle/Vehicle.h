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

// inclusão de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Pessoa {
	public:
		// seção de atributos e métodos públicos
		// e construtores e destrutores da classe
		Pessoa(); // construtor padrão
		Pessoa(std::string n); // construtor alternativo
		Pessoa(std::string n, short i); // construtor alternativo
		Pessoa(std::string n, short i, float a); // construtor alternativo
		~Pessoa(); // destrutor começa com “~”
		void setNome(std::string n);
		void setIdade(short i);
		void setAltura(float a);
		std::string getNome();
		int getIdade();
		float getAltura();
		void printDados();

	protected:
		// seção de atributos e métodos protegidos

	private:
		// seção de atributos e métodos privados
		std::string nome;// = NULL;
		short idade;// = 0;
		float altura;// = 0;
};

#endif /* VEHICLE_H_ */
