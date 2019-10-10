//============================================================================
// Name        : Agenda.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef AGENDA_CPP_
#define AGENDA_CPP_

#include "Agenda.h"

Agenda::Agenda(){
	x = 0; // Error syntax
}

void Agenda::armazenaPessoa(std::string nome, int idade, float altura){
	Povo[i].setNome(nome);
	Povo[i].setIdade(idade);
	Povo[i].setAltura(altura);
	i++;
}

void Agenda::removePessoa(std::string nome){
	int n = buscaPessoa(nome);
	Povo[n].setNome("");
	std::cout <<"... and deleted\n";
}

int Agenda::buscaPessoa(std::string nome){
	std::string tmp;
	i = 0;
	while(i < N){
		//std::cout << "i: "<< i << "\n";
		tmp = Povo[i].getNome();
		if (nome.compare(tmp) == 0){
			std::cout << tmp << " has found\n";
			return i;
		}
		i++;
	}
	std::cout << tmp << " hasn't found\n";
	return -1; // Fail
}

void Agenda::imprimePovo(){
	std::string tmp;
	i = 0;
	std::cout << "\nPrint People...\n";
	while(i < N){
		tmp = Povo[i].getNome();
		if (!tmp.empty()){
			std::cout << "P" << i << ": " << Povo[i].getNome() << "\n";
		}
		i++;
	}
	std::cout << "...Finished!\n";
}

void Agenda::imprimePessoa(int i){
	std::string tmp = Povo[i].getNome();
	if (tmp.empty()){
		std::cout << "\nIt's Empty!!! \n";
	}else{
		std::cout << "\nPrint Guy: " << tmp << "\n";
	}
}

Agenda::~Agenda(){}

#endif /* AGENDA_CPP_ */
