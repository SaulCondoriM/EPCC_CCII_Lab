#include<iostream>

#include "Forma.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Cuadrado.h"
#include "Circulo.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	Forma c("negro",145,471,'c');
	c.set_color("blanco");
	c.Mover(100,0);
	c.Imprimir();
	
	cout<<endl;
	
	Rectangulo a("azul", 15, 2, 'r', 10, 20);
	
	a.Area();
	a.Perimetro();
	a.Imprimir();
	
	cout<<endl;
	
	a.Cambiar_Tamanio(0.5);
	a.Imprimir();
	
	cout<<endl;
	cout<<endl;
	
	Forma *Figuras[4];
	
	Figuras[0] = new Rectangulo("azul", 12, 14, 'r', 20,15);
	Figuras[1] = new Cuadrado("rojo",10,0,'c',3,3);
	Figuras[2] = new Elipse("blanco", 19,140,'e',8,5);
	Figuras[3] = new Circulo("morado",156,127,'c', 5,5);
	
	for(int i=0; i<4; i++){
		Figuras[i]->set_color("Dorado");
		Figuras[i]->Mover(120,115);
		Figuras[i]->Imprimir();
		cout<<endl;
	}
	
	
	
	
	return 0;
}

