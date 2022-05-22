#include<iostream>
#include "Ave.h"
#include "Ganso.h"
#include "Gallina.h"
#include "Pato.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	Ganso a;
	a.set_color("amarrillo");
	a.set_velocidad(58);
	a.Mostrar();
	cout<<endl;
	
	Pato b;
	b.set_color("blanco");
	b.set_salto(4);
	b.Mostrar();
	cout<<endl;
	
	Gallina c;
	c.set_color("marron");
	c.set_vuelo(false);
	c.Mostrar();
	
	return 0;
}

