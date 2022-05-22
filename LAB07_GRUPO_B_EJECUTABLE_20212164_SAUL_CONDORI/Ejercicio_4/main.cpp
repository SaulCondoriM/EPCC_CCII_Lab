#include<iostream>
#include "ClaseMultimedia.h"
#include "ClaseDisco.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	ClaseDisco m;
	m.Sonar();
	m.set_tipo("clasica");
	m.set_vol(20);
	m.set_anio(1998);
	
	m.Mostrar();
	
	return 0;
}

