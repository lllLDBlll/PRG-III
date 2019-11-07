//============================================================================
// Name        : Vehicle.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef VEHICLE_H_
#define VEHICLE_H_

// inclus�o de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Vehicle {
	public:
		// se��o de atributos e m�todos p�blicos
		// e construtores e destrutores da classe
		Vehicle(); // construtor padr�o
		/*Vehicle(int p); // construtor alternativo
		...
		*/
		void printDatas();

		~Vehicle(); // destrutor come�a com �~�
	protected:
		// se��o de atributos e m�todos protegidos
	private:
		// se��o de atributos e m�todos privados
		// using float just for mathematical preciousness
		int power;		// power of motor in hp
		float rate;		// in km/litre
		int tank_max;	// in litre
		float tank_now = 0;	// in litre
		int dist = 0;		// distance in km
		//int pneu[P];	// pneu pressure in lb pneu[0,1] = Front(Left, Right), pneu[2,3] = Rear(Left, Right)
};

#endif /* VEHICLE_H_ */
