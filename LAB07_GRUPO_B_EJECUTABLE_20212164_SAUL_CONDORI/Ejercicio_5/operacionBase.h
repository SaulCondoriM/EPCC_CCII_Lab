#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H

#include <iostream>
using namespace std;

class operacionBase{
protected:
	int operador;
	
public:
	operacionBase(){}
	~operacionBase(){}
	
	void setOperador(int);
	int getOperador();
};

void operacionBase::setOperador(int _operador){
	operador = _operador;
}

int operacionBase::getOperador(){
	
	return operador;
	
}

#endif
