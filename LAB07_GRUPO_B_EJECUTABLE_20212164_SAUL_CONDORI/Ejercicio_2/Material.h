#ifndef MATERIAL_H
#define MATERIAL_H

#include<iostream>
using namespace std;

class Material{
protected:
	
	string tipo;
	
public:
	Material(string);
	~Material(){}
	
};

Material::Material(string _tipo){
	tipo = _tipo;
}

#endif
