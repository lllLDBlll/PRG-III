//============================================================================
// Name        : main.cpp
// Project     : Tarefa_01_Vehicle.h
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved for IFSC
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
	Vehicle V;
	/*Tire T;
	Tire(10,20,30,40);
	T.printDatas();
	Tire(80,19,50,18);
	T.printDatas();
	*/
	V = Vehicle(10,20,30,40,100,50);
	V.Calib(-1,-2,-3,-4);
	V.Calib(0,1);
	V.Calib(1,2);
	V.Calib(2,3);
	V.Calib(3,4);
	V.FillTank(30);
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
