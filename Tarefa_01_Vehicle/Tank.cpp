//============================================================================
// Name        : Tank.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TANK_CPP_
#define TANK_CPP_

#include "Tank.h"

Tank::Tank(){};

Tank::Tank(int m, float n){
	max = m;
	now = n;
};

Tank::~Tank(){};
#endif /* TANK_CPP_ */
