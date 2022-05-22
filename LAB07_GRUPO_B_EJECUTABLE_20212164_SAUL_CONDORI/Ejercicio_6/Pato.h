#ifndef PATO_H
#define PATO_H
#include <iostream>
using namespace std;
class Pato : public Ave{
protected:
	
	int salto;
	
public:
	
	Pato(){}
	~Pato(){}
	
	void set_salto(int);
	void Mostrar();
	
};

void Pato::set_salto(int _salto){
	salto = _salto;
}

void Pato::Mostrar(){
	cout<<"\nEl color del pato es: "<<color;
	cout<<"\nEl pato salto "<<salto<<" metros";
}
#endif
