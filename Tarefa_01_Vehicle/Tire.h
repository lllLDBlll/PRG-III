//============================================================================
// Name        : Tire.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TIRE_H_
#define TIRE_H_
/*
 * Pneu  o Cada pneu possui uma determina press�o (em lb).
 * o Pode ser calibrado com determinada press�o informada (positiva ou negativa, sendo somada � atual).
 * */
#include <iostream> // incluir uma biblioteca

class Tire {
	public:
		//tire_t *tire_saved;
		Tire(); // construtor padr�o
		Tire(int fl, int fr, int rl, int rr);
		void printDatas();
		void check();
		~Tire(); // destrutor come�a com �~�
		/*struct tire{
			int front_left;
			int front_right;
			int rear_left;
			int rear_right;
		};
		tire tire_t = {0,0,0,0};
		*/
		int tire[4] = {0,0,0,0};
		bool low_pressure = 0;
	protected:
		// se��o de atributos e m�todos protegidos
	private:
		//int pneu[P];	// pneu pressure in lb pneu[0,1] = Front(Left, Right), pneu[2,3] = Rear(Left, Right)
};


#endif /* TIRE_H_ */
