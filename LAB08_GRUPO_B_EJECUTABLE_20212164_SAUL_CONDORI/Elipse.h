#ifndef ELIPSE_H
#define ELIPSE_H

#include<iostream>
using namespace std;

class Elipse : public Forma{
protected:
	
	float radioMayor;
	float radioMenor;
	
public:
	
	Elipse(string, int, int, char, float, float);
	~Elipse(){}
	
	void Imprimir();
	void Area();
	
	
};

Elipse::Elipse(string _color, int _coordenada1, int _coordenada2, char _nombre, float _radioMayor, float _radioMenor) : Forma(_color, _coordenada1, _coordenada2, _nombre){
	
	radioMayor = _radioMayor;
	radioMenor = _radioMenor;
	
}

void Elipse::Imprimir(){
	
	Forma::Imprimir();
	
	cout<<"\nEl radio mayor es: "<<radioMayor;
	cout<<"\nEl radio menor es: "<<radioMenor;	
}

void Elipse::Area(){
	
	cout<<"\nEl area del elipse es: "<<3.14 * (radioMayor * radioMenor);
	
}

#endif
