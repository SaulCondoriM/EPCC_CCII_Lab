#include <iostream>
using namespace std;
int validarEntre(int numero){
	if (0<numero && numero<101){
		return numero;
	}
	return 0;
int esPar(int num){
	if(num%2==0){
		return num;
	}
	return 0;
}
int Sumar(int num){
	
	int suma=0;
	if(num>0){
		for(int i=2; i<=num; i++){
			if(i%2!=0){
				suma += i;
			}
		}
		return suma;
	}
	return 0;
}
	
int main(int argc, char *argv[]) {
	
	int num;
	
	cout<<"Ingrese un numero: ";cin>>num;
	if(Sumar(esPar(validarEntre(num)))>0){
		cout<<"\nLa suma de los elementos es: "<<Sumar(esPar(validarEntre(num)));
	}
	
	return 0;
}
