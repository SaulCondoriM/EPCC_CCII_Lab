#include<iostream>
#include "Persona.h"
#include "Alumno.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	Alumno a;
	
	a.set_Edad(18);
	
	a.set_Nombre("saul");
	
	a.Mostrar();
	
	return 0;
}

