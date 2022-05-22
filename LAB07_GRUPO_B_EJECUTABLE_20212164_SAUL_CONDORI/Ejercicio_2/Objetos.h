#ifndef OBJETOS_H
#define OBJETOS_H

#include<iostream>
using namespace std;

class Objetos : public Color, public Material{
protected:
	string obj;
	
public:
	Objetos(int, int, int, string, string);
	~Objetos(){}
	
	void describirObjetos();
	
};

Objetos::Objetos(int _red, int _green, int _blue, string _tipo, string _obj) : Color(_red, _green, _blue), Material(_tipo){
	obj = _obj;
}

void Objetos::describirObjetos(){
	
	cout<<"\nEl objeto "<<obj<<" es de color: ";
	cout<<"\nRojo: "<<red;
	cout<<"\nVerde: "<<green;
	cout<<"\nAzul: "<<blue;
	cout<<"\nY tiene un material de "<<tipo;
	
	
}

#endif
