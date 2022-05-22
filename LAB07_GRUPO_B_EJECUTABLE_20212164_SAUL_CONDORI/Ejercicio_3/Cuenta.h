#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
using namespace std;

class Cuenta : public ProductoBancario{
public:
	
	Cuenta(string, double, int);
	~Cuenta(){}
	
	void Imprimir2();
};

Cuenta::Cuenta(string _cliente, double _saldo, int _numProductos) : ProductoBancario(_cliente, _saldo, _numProductos){
	
}

void Cuenta::Imprimir2(){
	Imprimir1();
}

#endif
