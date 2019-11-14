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
Tanque de Combustível  o Possui uma determinada capacidade e quantidade atual de combustível (ambos em litros).
 o Pode ser abastecido com uma certa quantidade de combustível, limitado à sua capacidade máxima.
*/
#include <iostream> // include a library

class Tank {
	public:
		int max;	// in litre
		float now;	// in litre
		Tank();
		Tank(int m, float n);
		~Tank(); // destrutor começa com “~”
	protected:
		// seção de atributos e métodos protegidos
	private:
		// seção de atributos e métodos privados
		// using float just for mathematical preciousness
};




#endif /* TANK_H_ */
