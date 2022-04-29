#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	float a;
	
	cout<<"Ingrese el numero a redondear: "; cin>>a;
	
	cout<<"\nEl numero "<<a<<" redondeado a enteros es: "<<round(a);
	
	return 0;
}
