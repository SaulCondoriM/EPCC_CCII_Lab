#ifndef CIRCULO_H
#define CIRCULO_H


#include<iostream>
using namespace std;

class Circulo : public Elipse{
protected:
public:
	Circulo(string, int, int, char, float, float);
	~Circulo(){}
	
	void Imprimir();
};

Circulo::Circulo(string _color, int _coordenada1, int _coordenada2, char _nombre, float _radioMayor, float _radioMenor) : Elipse(_color, _coordenada1, _coordenada2, _nombre, _radioMayor, _radioMenor){
	
}

void Circulo::Imprimir(){
	
	Elipse::Imprimir();
}

#endif
