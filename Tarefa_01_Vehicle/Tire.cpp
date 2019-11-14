//============================================================================
// Name        : Tire.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TIRE_CPP_
#define TIRE_CPP_

#include "Tire.h"

Tire::Tire(){};

Tire::Tire(int fl, int fr, int rl, int rr){
	tire[0] = fl; tire[1] = fr; tire[2] = rl; tire[3] = rr;
	check();
};

void Tire::check(){
	short tmp = 0;
	for(int i = 0; i < 4; i++){
		if(tire[i] < 20)
			tmp++;
	}
	if(tmp >= 2){
		low_pressure = 1; //set Low Pressure Flag
	}else{
		low_pressure = 0;
	}
	printDatas();
}

void Tire::printDatas(){
	/*
	int *ptr = &tire_t.front_left;
	std::cout << "Print Tire Values" << std::endl;
	std::cout << ": " << tire_t.front_left << std::endl;
	std::cout << ": " << tire_t.front_right << std::endl;
	std::cout  << ": " << tire_t.rear_left << std::endl;
	std::cout  << ": " << tire_t.rear_right << std::endl;
	for(int i = 0; i < 4; i++){
	}
	*/
	std::cout << "Flag: " << low_pressure << std::endl;
};

Tire::~Tire(){};

#endif /* TIRE_CPP_ */
