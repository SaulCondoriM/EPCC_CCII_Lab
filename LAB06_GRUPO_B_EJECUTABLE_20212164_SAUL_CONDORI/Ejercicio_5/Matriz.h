#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <time.h>
using namespace std;

class Matriz{
private:
	int M[3][3];
public:
	Matriz();
	~Matriz();
	
	void mostrarMatriz();
	void buscarEnMatriz();
	
};

Matriz::Matriz(){
	int ran;
	srand(time(NULL));
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			ran=1+rand()%(10-1);
			M[i][j]=ran;
		}
	}
}

Matriz::~Matriz(){}

void Matriz::mostrarMatriz(){
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Matriz::buscarEnMatriz(){
	int valor;
	
	bool a = false;
	
	cout<<"\nIngrese el número a buscar: ";cin>>valor;
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if(M[i][j] == valor){
				
				cout<<"\nEl numero se encontro en la posicion: ["<<i<<"]["<<j<<"]"<<endl;
				
				a = true;
				
			}
		}
	}
	
	if(a == false){
		cout<<"\nNo se encontro el numero";
	}
	
}

#endif
