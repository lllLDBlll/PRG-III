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

Vehicle::Vehicle(){};

void Vehicle::init(int pw, float r, int tm, char fl, char fr, char rl, char rr, tire_t t){
	power = pw;
	rate = r;
	tank_max = tm;
	tank_now = tm;
	//front_left = fl;
	//front_right = fr;
	//rear_left = rl;
	//rear_right = rr;
	amor = 1;
	tire_save = t;
	std::cout << "Print de Dados" << std::endl;
	std::cout << tire_save.front_left << std::endl;
	std::cout << tire_save.front_right << std::endl;
};

void Vehicle::Move(int d){
	dist = dist + d;
};

void Vehicle::FillTank(short ft){
	//tank_now = tank_now;
	//if (tank_now == 0)
		//return 0;
};

void Vehicle::CalibTire(short ct){
	/*struct tire{
		/*uint8_t*//*char front_left, front_right, rear_left, rear_right;
	};*/
	//tire_t = t;
};

void Vehicle::printDatas(){

};

/*
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

Vehicle::~Vehicle(){};
#endif /* VEHICLE_CPP_*/
