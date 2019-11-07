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

void Vehicle::init(int pw, float r, int tm, int fl, int fr, int rl, int rr){
	power = pw;
	rate = r;
	tank_max = tm; //Tank Max Set
	FillTank(tm);
	CalibTire(fl, fr, rl, rr); // Call CalibTire for Calibration
	std::cout << "Print de Dados" << std::endl;
	std::cout << power << std::endl;
	std::cout << rate << std::endl;
	std::cout << tank_max << std::endl;
	std::cout << tank_now << std::endl;
	std::cout << tank_max << std::endl;
};

void Vehicle::Move(int d){
	dist = dist + d;
};

int Vehicle::FillTank(short ft){

	tank_now = tank_now + ft;

	if (tank_now >= tank_max){
		tank_now = tank_max;
		std::cout << "Full Gas" << std::endl;
		return 0;
	}

	if (tank_now <= 0){
		std::cout << "Without Gas" << std::endl;
		return 0;
	}
};

void Vehicle::CalibTire(int fl, int fr, int rl, int rr){
	//if one
	tire_t.front_left = tire_t.front_left + fl;
	tire_t.front_right = tire_t.front_right + fr;
	tire_t.rear_left = tire_t.rear_left + rl;
	tire_t.rear_right = tire_t.rear_right + rr;

	std::cout << "Tires Pressure Updated" << std::endl;
	std::cout << tire_t.front_left << std::endl;
	std::cout << tire_t.front_right << std::endl;
	std::cout << tire_t.rear_left << std::endl;
	std::cout << tire_t.rear_right << std::endl;
};

void Vehicle::printDatas(){

};

Vehicle::~Vehicle(){};
#endif /* VEHICLE_CPP_*/
