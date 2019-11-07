//============================================================================
// Name        : Engine.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef ENGINE_CPP_
#define ENGINE_CPP_

#include "Engine.h"

Engine::Engine(){};

Engine::Engine(unsigned int p, float r){
	power = p;
	rate = r;
};

void Engine::Forward(int d){
	dist = dist + d;
};

void Engine::printDatas(){};

Engine::~Engine(){};
#endif /* ENGINE_CPP_ */
