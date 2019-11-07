//============================================================================
// Name        : Tire.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef TIRE_H_
#define TIRE_H_
/*
 * Pneu  o Cada pneu possui uma determina pressão (em lb).
 * o Pode ser calibrado com determinada pressão informada (positiva ou negativa, sendo somada à atual).
 * */
#include <iostream> // incluir uma biblioteca

class Tire {
	public:
		//tire_t *tire_saved;
		Tire(); // construtor padrão
		Tire(int fl, int fr, int rl, int rr);
		void printDatas();
		~Tire(); // destrutor começa com “~”
	protected:
		// seção de atributos e métodos protegidos
	private:
		struct tire{
			int front_left;
			int front_right;
			int rear_left;
			int rear_right;
		};
		tire tire_t = {0,0,0,0};
		//int pneu[P];	// pneu pressure in lb pneu[0,1] = Front(Left, Right), pneu[2,3] = Rear(Left, Right)
};


#endif /* TIRE_H_ */
