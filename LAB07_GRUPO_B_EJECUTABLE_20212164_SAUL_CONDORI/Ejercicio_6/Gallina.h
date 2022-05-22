#ifndef GALLINA_H
#define GALLINA_H
#include <iostream>
using namespace std;
class Gallina : public Ave{
protected:
	
	bool vuelo; 
	
public:
	
	Gallina(){}
	~Gallina(){}
	
	void set_vuelo(bool);
	void Mostrar();
	
};

void Gallina::set_vuelo(bool _vuelo){
	
	vuelo = _vuelo;
	
}

void Gallina::Mostrar(){
	
	cout<<"\nEl color de la gallina es: "<<color;
	if(vuelo){
		cout<<"\nLa gallina SI vuela";
	}
	else{
		cout<<"\nLa gallina NO vuela";
	}
	
}
#endif
