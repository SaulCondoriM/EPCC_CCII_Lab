#include<iostream>

#include "ProductoBancario.h"
#include "Cuenta.h"
#include "CuentaJoven.h"
#include "Prestamo.h"
#include "Hipoteca.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	
	//Al estar privado los metodos no va a poder llamarlos
	CuentaJoven a("saul", 1195, 15);
	a.Imprimir3();
	
	cout<<endl;
	
	//Llama a los metodos sin ningun problema
	Hipoteca b("pedro", 1455, 2);
	b.Imprimir5();
	
	return 0;
}

