#ifndef CUADRADO_H
#define CUADRADO_H

#include<iostream>
using namespace std;


class Cuadrado : public Rectangulo{
protected:
	
public:
	Cuadrado(string, int, int, char, int, int);
	~Cuadrado(){}
	
	void Imprimir();
};

Cuadrado::Cuadrado(string _color, int _coordenada1, int _coordenada2, char _nombre, int _ladoMenor, int _ladoMayor) : Rectangulo(_color, _coordenada1, _coordenada2, _nombre, _ladoMenor, _ladoMayor){

	
}

void Cuadrado::Imprimir(){
	
	Rectangulo::Imprimir();
	
	
}


#endif
