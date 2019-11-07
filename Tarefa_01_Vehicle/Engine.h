//============================================================================
// Name        : Engine.h
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef ENGINE_H_
#define ENGINE_H_
/*
 *  Motor  o Possui uma potência (em hp), uma taxa fixa de consumo (em km/litro) e um
 *   tanque de combustível (ver abaixo). o Possui um comando para avançar uma determinada quantidade de
 *    km. Se a pressão de mais de um pneu (ver abaixo) estiver abaixo de 20 lb, o consumo do veículo aumenta
 *     em 30%. Se não houver combustível suficiente, o veículo avança até o tanque esvaziar.
*/

#include <iostream> // incluir uma biblioteca

class Engine {
	public:
		Engine(); // construtor padrão
		Engine(unsigned int p, float r); // construtor alternativo
		void Forward(int d);
		void printDatas();
		~Engine(); // destrutor começa com “~”
	protected:
		// seção de atributos e métodos protegidos
	private:
		unsigned int power;	// power of motor in hp
		float rate;		// in km/litre
		int dist = 0;		// distance in km
};

#endif /* ENGINE_H_ */
