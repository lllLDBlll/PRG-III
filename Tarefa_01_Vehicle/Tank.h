//============================================================================
// Name        : Tank.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TANK_H_
#define TANK_H_
/*
Tanque de Combustível  o Possui uma determinada capacidade e quantidade atual de combustível (ambos em litros).
 o Pode ser abastecido com uma certa quantidade de combustível, limitado à sua capacidade máxima.
*/
#include <iostream> // incluir uma biblioteca

class Tank {
	public:
		Tank();
		Tank(int m, float n);
		int FillTank(short ft);
		void printDatas();
		~Tank(); // destrutor começa com “~”
	protected:
		// seção de atributos e métodos protegidos
	private:
		// seção de atributos e métodos privados
		// using float just for mathematical preciousness
		int max;	// in litre
		float now;	// in litre
};




#endif /* TANK_H_ */
