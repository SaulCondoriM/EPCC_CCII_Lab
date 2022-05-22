#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <iostream>
using namespace std;

class Prestamo : public ProductoBancario{
protected:
	
	Prestamo(string, double, int);
	~Prestamo(){}
	
	void Imprimir4();
};

Prestamo::Prestamo(string _cliente, double _saldo, int _numProductos) : ProductoBancario(_cliente, _saldo, _numProductos){
	
}

void Prestamo::Imprimir4(){
	
	Imprimir1();
	
}

#endif
