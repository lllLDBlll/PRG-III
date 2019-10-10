//============================================================================
// Name        : Pessoa.cpp
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved to me 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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
