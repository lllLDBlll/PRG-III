/*
 * Pessoa.h
 *
 *  Created on: 30 de ago de 2019
 *      Author: Leonardo D. Batista
 */

#ifndef PESSOA_H_
#define PESSOA_H_

// inclus�o de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Pessoa {
	public:
		// se��o de atributos e m�todos p�blicos
		// e construtores e destrutores da classe
		Pessoa(); // construtor padr�o
		Pessoa(char* n); // construtor alternativo
		Pessoa(char* n, short i); // construtor alternativo
		Pessoa(char* n, short i, float a); // construtor alternativo
		~Pessoa(); // destrutor come�a com �~�
		void setIdade(short i);
		void setAltura(float a);
		int getIdade();
		float getAltura();
		void printDados();

	protected:
		// se��o de atributos e m�todos protegidos

	private:
		// se��o de atributos e m�todos privados
		char* nome;// = NULL;
		short idade;// = 0;
		float altura;// = 0;
};




#endif /* PESSOA_H_ */
