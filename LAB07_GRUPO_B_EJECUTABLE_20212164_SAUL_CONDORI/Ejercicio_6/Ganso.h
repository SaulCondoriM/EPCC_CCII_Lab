#ifndef GANSO_H
#define GANSO_H
#include <iostream>
using namespace std;
class Ganso : public Ave{
protected:
	
	int velocidad;
	
public:
	
	Ganso(){}
	~Ganso(){}
	void set_velocidad(int);
	void Mostrar();
};

void Ganso::set_velocidad(int _velocidad){
	velocidad = _velocidad;
}
void Ganso::Mostrar(){
	cout<<"\nEl ganso es de color: "<<color;
	cout<<"\nEl ganso tiene una velocidad de: "<<velocidad<<" m/s";
}
#endif
