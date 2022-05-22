#include<iostream>
#include "operacionBase.h"
#include "operacionFactorial.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	operacionFactorial m;
	
	m.setOperador(5);
	
	cout<<"\nEl numero es: "<<m.getOperador();
	
	cout<<"\nEl Factorial es: "<<m.devolverFactorial();
	
	return 0;
}

