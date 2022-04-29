#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float cant;
	float sum=0;
	float Numeros[100];
	
	
	cout<<"Cuantos numeros desea ingresar? "; cin>>cant;
	
	for(int i=0; i<cant; i++){
		
		cout<<"\nIngrese un numero: "; cin>>Numeros[i];
		
		sum += Numeros[i];
		
	}
	
	cout<<"La media es: "<<sum/cant;
	
	return 0;
}

