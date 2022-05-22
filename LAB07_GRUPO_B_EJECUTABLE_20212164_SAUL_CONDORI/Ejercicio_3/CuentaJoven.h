#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H

#include <iostream>
using namespace std;

class CuentaJoven : public Cuenta, public ProductoBancario{
public:
	
	
	CuentaJoven(string, double, int);
	~CuentaJoven(){}
	
	void Imprimir3();
	
};

CuentaJoven::CuentaJoven(string _cliente, double _saldo, int _numProductos) : Cuenta(_cliente, _saldo, _numProductos), ProductoBancario(_cliente, _saldo, _numProductos){
	
}

void CuentaJoven::Imprimir3(){
	
	Imprimir2();
	
}


#endif
