#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;


class Persona{
	
protected:
	
	int edad;
	string nombre;
	
public:
	
	Persona(){}
	~Persona(){}
	
	void set_Edad(int);
	void set_Nombre(string);
	
};

void Persona::set_Edad(int _edad){
	edad = _edad;
}

void Persona::set_Nombre(string _nombre){
	nombre = _nombre;
}
#endif
