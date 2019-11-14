//============================================================================
// Name        : Tank.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TANK_H_
#define TANK_H_
/*
Tanque de Combust�vel  o Possui uma determinada capacidade e quantidade atual de combust�vel (ambos em litros).
 o Pode ser abastecido com uma certa quantidade de combust�vel, limitado � sua capacidade m�xima.
*/
#include <iostream> // include a library

class Tank {
	public:
		int max;	// in litre
		float now;	// in litre
		Tank();
		Tank(int m, float n);
		~Tank(); // destrutor come�a com �~�
	protected:
		// se��o de atributos e m�todos protegidos
	private:
		// se��o de atributos e m�todos privados
		// using float just for mathematical preciousness
};




#endif /* TANK_H_ */
