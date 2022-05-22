#ifndef ALUMNO_H
#define ALUMNO_H

#include<iostream>
using namespace std;

class Alumno : public Persona{
protected:
	
public:
	Alumno(){}
	~Alumno(){}
	void Mostrar();
	
	
	
};


void Alumno::Mostrar(){
	cout<<"\nLa edad es: "<<edad;
	cout<<"\nEl nombre es: "<<nombre;
	

#endif
