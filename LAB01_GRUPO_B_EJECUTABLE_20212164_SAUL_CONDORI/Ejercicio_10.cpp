#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string contra="sacm123";
	
	string clave;
	
	
	cout<<"\nIntroduzca su contraseņa: "; cin>>clave;

	
	while(clave != contra){
		cout<<"\nIntroduzca su contraseņa: "; cin>>clave;
	}
	
	return 0;
}

