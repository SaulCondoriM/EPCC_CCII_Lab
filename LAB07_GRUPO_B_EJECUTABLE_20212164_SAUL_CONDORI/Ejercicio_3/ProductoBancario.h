#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H

#include <iostream>
using namespace std;

class ProductoBancario{
protected:
	string cliente;
	double saldo;
	int numProductos;
	
public:
	ProductoBancario(string, double, int);
	~ProductoBancario(){}
	
	void Imprimir1();
};

ProductoBancario::ProductoBancario(string _cliente, double _saldo, int _numProductos){
	
	cliente = _cliente;
	saldo = _saldo;
	numProductos = _numProductos;
	
}

void ProductoBancario::Imprimir1(){
	cout<<"\nCliente: "<<cliente;
	cout<<"\nSaldo: "<<saldo;
	cout<<"\nNumero de Productos: "<<numProductos;
}

#endif
