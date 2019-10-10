//============================================================================
// Name        : Pessoa.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef PESSOA_CPP_
#define PESSOA_CPP_

#include "Pessoa.h"

Pessoa::Pessoa(){
	//nome = 0;		//Syntax warning
	idade = 0;		//Syntax warning
	altura = 0;		//Syntax warning
};

Pessoa::Pessoa(std::string n){
	nome = n;
	idade = 0;		//Syntax warning
	altura = 0; 	//Syntax warning
}

Pessoa::Pessoa(std::string n, short i){
	nome = n;
	idade = i;
	altura = 0;
}

Pessoa::Pessoa(std::string n, short i, float a){
	nome = n;
	idade = i;
	altura = a;
}

Pessoa::~Pessoa(){};

void Pessoa::setNome(std::string n){
	nome = n;
}

void Pessoa::setIdade(short i){
	idade = i;
}

void Pessoa::setAltura(float a){
	altura = a;
}

std::string Pessoa::getNome(){
	return nome;
}

int Pessoa::getIdade(){
	return idade;
}

float Pessoa::getAltura(){
	return altura;
}

void Pessoa::printDados(){
	std::cout << "Print de Dados" << std::endl;
	std::cout << nome << std::endl;
	std::cout << idade << std::endl;
	std::cout << altura << std::endl;
}

#endif /* PESSOA_CPP_*/
