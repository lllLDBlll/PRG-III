/*
 * Pessoa.h
 *
 *  Created on: 30 de ago de 2019
 *      Author: Leonardo D. Batista
 */

#ifndef PESSOA_H_
#define PESSOA_H_

// inclusão de headers de arquivos e bibliotecas
#include <iostream> // incluir uma biblioteca

class Pessoa {
	public:
		// seção de atributos e métodos públicos
		// e construtores e destrutores da classe
		Pessoa(); // construtor padrão
		Pessoa(char* n); // construtor alternativo
		Pessoa(char* n, short i); // construtor alternativo
		Pessoa(char* n, short i, float a); // construtor alternativo
		~Pessoa(); // destrutor começa com “~”
		void setIdade(short i);
		void setAltura(float a);
		int getIdade();
		float getAltura();
		void printDados();

	protected:
		// seção de atributos e métodos protegidos

	private:
		// seção de atributos e métodos privados
		char* nome;// = NULL;
		short idade;// = 0;
		float altura;// = 0;
};




#endif /* PESSOA_H_ */
