#ifndef RECTANGULO_H
#define RECTANGULO_H

#include<iostream>
using namespace std;


class Rectangulo : public Forma{
protected:
	
	int ladoMenor;
	int ladoMayor;
	
public:
	Rectangulo(string, int, int, char, int, int);
	~Rectangulo(){}
	
	void Imprimir();
	
	void Area();
	void Perimetro();
	void Cambiar_Tamanio(float);
};





Rectangulo::Rectangulo(string _color, int _coordenada1, int _coordenada2, char _nombre,int _ladoMenor, int _ladoMayor) : Forma(_color, _coordenada1, _coordenada2, _nombre){
	
	ladoMenor = _ladoMenor;
	ladoMayor = _ladoMayor;
	
}



void Rectangulo::Imprimir(){
	
	Forma::Imprimir();
	
	cout<<"\nEl lado menor es: "<<ladoMenor;
	cout<<"\nEl lado mayor es: "<<ladoMayor;
	
}




void Rectangulo::Area(){
	
	cout<<"\nEl area es: "<<ladoMenor * ladoMayor;
}

void Rectangulo::Perimetro(){
	
	cout<<"\nEl Perimetro : "<< 2 * ladoMenor + 2 * ladoMayor;
	
}

void Rectangulo::Cambiar_Tamanio(float _a){
	
	ladoMayor *= _a;
	ladoMenor *= _a;
	
}

#endif
