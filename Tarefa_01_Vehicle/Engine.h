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
 *  Motor  o Possui uma pot�ncia (em hp), uma taxa fixa de consumo (em km/litro) e um
 *   tanque de combust�vel (ver abaixo). o Possui um comando para avan�ar uma determinada quantidade de
 *    km. Se a press�o de mais de um pneu (ver abaixo) estiver abaixo de 20 lb, o consumo do ve�culo aumenta
 *     em 30%. Se n�o houver combust�vel suficiente, o ve�culo avan�a at� o tanque esvaziar.
*/

#include <iostream> // incluir uma biblioteca

class Engine {
	public:
		Engine(); // construtor padr�o
		Engine(unsigned int p, float r); // construtor alternativo
		void Forward(int d);
		void printDatas();
		~Engine(); // destrutor come�a com �~�
	protected:
		// se��o de atributos e m�todos protegidos
	private:
		unsigned int power;	// power of motor in hp
		float rate;		// in km/litre
		int dist = 0;		// distance in km
};

#endif /* ENGINE_H_ */
