//============================================================================
// Name        : main.cpp
// Author      : Leonardo D. Batista
// Version     :
// Copyright   : All rights reserved to me
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pessoa.h"
using namespace std;

int main() {
	Pessoa p;
	char c[] = "Leonardo";
	p = Pessoa(c);
	p.setIdade(24);
	p.setAltura(1.81);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	p.printDados();
	system("pause");
	return 0;
}
