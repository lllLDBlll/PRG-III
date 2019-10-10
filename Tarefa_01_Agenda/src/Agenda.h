//============================================================================
// Name        : Agenda.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include "Pessoa.h"
#define N 10

class Agenda {
	Pessoa Povo[N];
	public:
		Agenda();
		void armazenaPessoa(std::string nome, int idade, float altura);
		void removePessoa(std::string nome);
		int buscaPessoa(std::string nome);
		void imprimePovo();
		void imprimePessoa(int i);
		//
		//
		~Agenda();
	protected:
		int x;
	private:
		int i = 0; //interador de pessoas
};
