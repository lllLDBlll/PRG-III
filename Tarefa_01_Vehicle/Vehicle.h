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
#define P 4 // Four pneus

// inclusão de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Vehicle {
	public:
		struct tire{
			char front_left, front_right, rear_left, rear_right;
		};
		typedef tire tire_t;
		tire_t tire_save;
		// seção de atributos e métodos públicos
		// e construtores e destrutores da classe
		Vehicle(); // construtor padrão
		/*Vehicle(int p); // construtor alternativo
		...
		*/
		void init(int pw, float r, int tm, char fl, char fr, char rl, char rr, tire_t t); // construtor alternativo
		void Move(int d);
		void FillTank(short ft);
		void CalibTire(short ct);
		std::string getNome();
		void printDatas();

		//char front_left, front_right, rear_left, rear_right;
		int amor = 0;
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
		//int pneu[P];	// pneu pressure in lb pneu[0,1] = Front(Left, Right), pneu[2,3] = Rear(Left, Right)
};

#endif /* VEHICLE_H_ */
