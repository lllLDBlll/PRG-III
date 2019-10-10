#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(){
}
Pessoa::Pessoa(char *n, int i, float a){
    nome = n;
    idade = i;
    altura = a;
}
Pessoa::~Pessoa(){}
