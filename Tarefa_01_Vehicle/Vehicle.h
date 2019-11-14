//============================================================================
// Name        : Vehicle.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef VEHICLE_H_
#define VEHICLE_H_

// inclusão de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca
#include "Engine.h"
#include "Tank.h"
#include "Tire.h"

class Vehicle {
	public:
		Tire T;
		Tank TK;
		// seção de atributos e métodos públicos
		// e construtores e destrutores da classe
		Vehicle(); // construtor padrão
		/*Vehicle(int p); // construtor alternativo
		...
		*/
		Vehicle(int fl, int fr, int rl, int rr);
		Vehicle(int fl, int fr, int rl, int rr, int m, float n);
		int Calib(int fl, int fr, int rl, int rr);
		int Calib(int index, int p);
		int FillTank(short ft);
		void printDatas();
		~Vehicle(); // destrutor começa com “~”
	protected:
		// seção de atributos e métodos protegidos
	private:
		// seção de atributos e métodos privados
		// using float just for mathematical preciousness
		int power;		// power of motor in hp
		float rate;		// in km/litre
		int tank_max;	// in litre
		float tank_now = 0;	// in litre
		int dist = 0;		// distance in km
		//enum Tires {front_left, front_right, rear_left, rear_right};
		//int tire[P];	// tire pressure in lb tire[0,1] = Front(Left, Right), tire[2,3] = Rear(Left, Right)
};

#endif /* VEHICLE_H_ */
