#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H

#include <iostream>
using namespace std;

class operacionFactorial : public operacionBase{
protected:
	
	int operador;
	
public:
	
	operacionFactorial(){}
	~operacionFactorial(){}
	
	void setOperador(int);
	int getOperador();
	int devolverFactorial();
	
};

void operacionFactorial::setOperador(int _operador){
	
	operador = _operador;
	
}

int operacionFactorial::getOperador(){
	
	return operador;
	
}

int operacionFactorial::devolverFactorial(){
	
	int factorial=1;
	
	if(operador<0){
		factorial = 0;
		return factorial;
	}
	else if(operador == 0){
		return factorial;
	}
	else{
		for(int i=1; i <= operador; i++){
			factorial *= i;
		}
		
		return factorial;
	}
	
}

#endif
