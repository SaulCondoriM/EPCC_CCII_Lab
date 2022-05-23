#ifndef FORMA_H
#define FORMA_H

#include<iostream>
using namespace std;

class Forma{
protected:
	string color;
	int coordenada1;
	int coordenada2;
	char nombre;
	
public:
	
	Forma(string, int, int, char);
	~Forma(){}
	
	void set_color(string);
	string get_color();
	void Mover(int, int);
	virtual void Imprimir();
	
};



Forma::Forma(string _color, int _coordenada1, int _coordenada2, char _nombre){
	
	color = _color;
	coordenada1 = _coordenada1;
	coordenada2 = _coordenada2;
	nombre = _nombre;
	
}




void Forma::set_color(string _color){
	color = _color;
}

string Forma::get_color(){
	return color;
}
void Forma::Mover(int _coordenada1, int _coordenada2){
	
	coordenada1 = _coordenada1;
	coordenada2 = _coordenada2;
	
}

void Forma::Imprimir(){
	cout<<"\nEl color es : "<<color;
	cout<<"\nLa coordenadas son: X: "<<coordenada1<<" Y: "<<coordenada2;
	cout<<"\nEl nombre es: "<<nombre;
	
	
}

#endif
