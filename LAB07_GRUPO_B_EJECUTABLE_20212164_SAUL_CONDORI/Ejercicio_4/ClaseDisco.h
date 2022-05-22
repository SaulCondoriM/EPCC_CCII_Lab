#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include <iostream>
using namespace std;

class ClaseDisco : public ClaseMultimedia{
protected:
	
	int anio;
	
public:
	ClaseDisco(){}
	~ClaseDisco(){}
	
	void set_anio(int);
	void Mostrar();
	
};

void ClaseDisco::set_anio(int _anio){
	anio = _anio;
	
}

void ClaseDisco::Mostrar(){
	cout<<"\nEl tipo de sonido es: "<<tipo;
	cout<<"\nEl volumen es: "<<vol;
	
	cout<<"\nEl año es: "<<anio;
}

#endif
