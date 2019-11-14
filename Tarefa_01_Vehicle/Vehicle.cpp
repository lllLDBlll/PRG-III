//============================================================================
// Name        : Vehicle.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
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

Vehicle::Vehicle(){
	T = Tire();
	TK = Tank();
};

Vehicle::Vehicle(int fl, int fr, int rl, int rr){
	T = Tire(fl, fr, rl, rr);
};

Vehicle::Vehicle(int fl, int fr, int rl, int rr, int m, float n){
	T = Tire(fl, fr, rl, rr);
	TK = Tank(m, n);
	printDatas();
};

/*
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

*/
int Vehicle::Calib(int fl, int fr, int rl, int rr){
	T.tire[0] = T.tire[0] + fl;
	T.tire[1] = T.tire[1] + fr;
	T.tire[2] = T.tire[2] + rl;
	T.tire[3] = T.tire[3] + rr;
	T.check();
}

int Vehicle::Calib(int index, int p){
	switch(index){
	case 0:
		T.tire[0] = T.tire[0] + p;
		break;
	case 1:
		T.tire[1] = T.tire[1] + p;
		break;
	case 2:
		T.tire[2] = T.tire[2] + p;
		break;
	case 3:
		T.tire[3] = T.tire[3] + p;
		break;
	default:
		break;
	}
	T.check();
}

int Vehicle::FillTank(short ft){
	TK.now = TK.now + ft;
	if (TK.now > TK.max)
		TK.now = TK.max;
	printDatas();
	return 0;
};


void Vehicle::printDatas(){
	std::cout << TK.now << std::endl;
	std::cout << TK.max << std::endl;
};

Vehicle::~Vehicle(){};
#endif /* VEHICLE_CPP_*/
