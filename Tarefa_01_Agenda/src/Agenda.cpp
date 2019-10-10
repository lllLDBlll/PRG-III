//============================================================================
// Name        : Agenda.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================
//#include <iostream>
//#include <string>
#include "Agenda.h"

Agenda::Agenda(){}

void Agenda::armazenaPessoa(std::string nome, int idade, float altura){
	Povo[i].setNome(nome);
	Povo[i].setIdade(idade);
	Povo[i].setAltura(altura);
	i++;
}

void Agenda::removePessoa(std::string nome){
	while(1){
		std::string tmp = Povo[i].getNome();
		if (nome.compare(tmp) == 0)
			std::cout << "still, " << tmp << " is an apple\n";
	}
}

int Agenda::buscaPessoa(std::string nome){}
void Agenda::imprimePovo(){}
void Agenda::imprimePessoa(int i){}
Agenda::~Agenda(){}
