#include<iostream>
#include <vector>
#include "Arreglo.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	Arreglo M;
	
	M.Agregar(5);
	M.Agregar(4);
	M.Agregar(12);
	M.Agregar(20);
	M.Agregar(41);
	
	M.Mostrar();
	
	cout<<endl;
	M.Eliminar(12);
	
	cout<<endl;
	M.Mostrar();
	
	return 0;
}

