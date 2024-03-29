//============================================================================
// Name        : main.cpp
// Project     : Tarefa_01_Agenda.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Agenda.h"

using namespace std;

int main()
{
	char linha[] = "------------------------------------------------\n";
	Agenda A;
	
	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa("Tiago", 20, 1.80);
	A.imprimePovo();
	cout << linha;

	int posicao = A.buscaPessoa("Tiago");
	if (posicao > 0)
		A.imprimePessoa(posicao);
	cout << linha;
	
	A.removePessoa("Tiago");
	A.imprimePovo();
	cout << linha;

	system("pause");

    return 0;
}
