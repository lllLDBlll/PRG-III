//============================================================================
// Name        : Vehicle.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef VEHICLE_CPP_
#define VEHICLE_CPP_

#include "Vehicle.h"

/*ESCOPO
Motor
- Potencia em hp
Taxa de consumo fixa km/litro
taque de combustivel
- comando: avançar em km, se a pressao de mais de um pneu estiver
abaixo de 20 lb  o consumo do veiculo aumenta 30%
se nao houver combusivel suficiente o veiculo avanca ate o tanque
esvaziar

Tanque
- Capacidade maxima litros
- quantidade atual litros
- comando: pode ser abastecido com uma quantidade limitdo a sua maxima

Pneu
- cada pneu tem uma perssao em lb
- Pode ser calibrado com uma pressao positiva ou negativa sendo somada a atual

*/

/*
Vehicle::Vehicle(){
	//nome = 0;
	idade = 0;
	altura = 0;
};

Vehicle::Vehicle(std::string n){
	nome = n;
	idade = 0;		//Syntax warning
	altura = 0; 	//Syntax warning
}

Vehicle::Vehicle(std::string n, short i){
	nome = n;
	idade = i;
	altura = 0;
}

Vehicle::Vehicle(std::string n, short i, float a){
	nome = n;
	idade = i;
	altura = a;
}

Vehicle::~Vehicle(){};

void Vehicle::setNome(std::string n){
	nome = n;
}

void Vehicle::setIdade(short i){
	idade = i;
}

void Vehicle::setAltura(float a){
	altura = a;
}

std::string Vehicle::getNome(){
	return nome;
}

int Vehicle::getIdade(){
	return idade;
}

float Vehicle::getAltura(){
	return altura;
}

void Vehicle::printDados(){
	std::cout << "Print de Dados" << std::endl;
	std::cout << nome << std::endl;
	std::cout << idade << std::endl;
	std::cout << altura << std::endl;
}
*/
#endif /* VEHICLE_CPP_*/
