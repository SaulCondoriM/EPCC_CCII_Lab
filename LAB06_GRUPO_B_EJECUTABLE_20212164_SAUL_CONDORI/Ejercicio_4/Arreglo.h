#ifndef ARREGLO_H
#define ARREGLO_H

#include<iostream>
#include <vector>
using namespace std;

class Arreglo{
private:
	
	vector <int> A;
	
public:
	
	Arreglo();
	~Arreglo();
	
	bool Comprobar();
	void Agregar(int);
	void Eliminar(int);
	void Mostrar();
	
	
	
};

Arreglo::Arreglo(){}

Arreglo::~Arreglo(){}

bool Arreglo::Comprobar(){
	if(A.size() < 5){
		return true;
	}
	return false;
}

void Arreglo::Agregar(int a){
	if (Comprobar())
		A.push_back(a);
	else
		cout<<"\nNo hay espacio en el arreglo";
}

void Arreglo::Mostrar(){
	
	for (auto i = A.begin(); i != A.end(); i++){
		cout<<*i<<" ";	
	}
}

void Arreglo::Eliminar(int a){
	
	bool comp = false;
	
	if(A.size() == 0){
		cout<<"\nNo hay elementos";
	}
	else{
		for(auto i = A.begin(); i != A.end(); i++){
			
			if ( *i == a){
				
				A.erase(i);
				comp = true;
			}                             
		}
		if (comp == false){
			cout<<"\nElemento no encontrado";  
		}
	}
	
}

#endif
