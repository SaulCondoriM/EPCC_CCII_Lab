#include <iostream>
using namespace std;

bool buscar(int Numeros[], int a){
	
	for(int i=0; i<8; i++){
		if(a==Numeros[i]){
			return true;
		}
	}
	
	return false;
}

int main(int argc, char *argv[]) {
	
	int Numeros[8];
	int a;
	
	for(int i=0; i<8; i++){
		cout<<"Ingrese valor: ";cin>>Numeros[i];
	}
	
	cout<<"\nIngrese el numero que desee buscar: "; cin>>a;
	
	if(buscar(Numeros,a)){
		cout<<"\nEl numero SI ESTA";
	}
	else{
		cout<<"\nEl numero NO ESTA";
	}
	
	
	
	
	return 0;
}

