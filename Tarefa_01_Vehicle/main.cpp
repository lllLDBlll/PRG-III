//============================================================================
// Name        : main.cpp
// Project     : Tarefa_01_Vehicle.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rigths reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
	Vehicle V;
	V.init(1,1,200,9,8,7,6);
	V.CalibTire(10,10,10,10);
	V.FillTank(-10);
	V.FillTank(20);

	//V.pneu_t = 0;
/*
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
*/
	system("pause");

    return 0;
}
