#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float arreglo[100];
	int num;
	float sum=0, media=0;
	float menor, mayor;
	
	cout<<"Cuantos numeros quiere ingresar? "; cin>>num;
	
	
	for(int i=0; i<num; i++){
		cout<<"Ingrese un numero: "; cin>>arreglo[i];
		sum += arreglo[i];
	}
	menor=arreglo[0];
	mayor=arreglo[0];
	
	for(int i=0; i<num; i++){
		if(menor > arreglo[i]){
			menor = arreglo[i];
		}
		if(mayor < arreglo[i]){
			mayor = arreglo[i];
		}
	}
	media = sum/num;
	
	cout<<"\nEl numero mayor es: "<<mayor;
	cout<<"\nEl numero menor es: "<<menor;
	cout<<"\nLa media es: "<<media;
	
	return 0;
}

