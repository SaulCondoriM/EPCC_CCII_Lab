#ifndef HIPOTECA_H
#define HIPOTECA_H

#include <iostream>
using namespace std;

class Hipoteca : public Prestamo, public ProductoBancario{
public:
	
	Hipoteca(string, double, int),
	~Hipoteca(){}
	
	void Imprimir5();
};

Hipoteca::Hipoteca(string _cliente, double _saldo, int _numProductos) : Prestamo(_cliente, _saldo, _numProductos), ProductoBancario(_cliente, _saldo, _numProductos){
	
}

void Hipoteca::Imprimir5(){
	Imprimir4();
}



#endif
