#include <iostream>
using namespace std;

float Potencia(float a, float b){
	
	float resultado=1;
	
	if(b>=0){
		for(int i=0;i<b;i++){
			resultado *= a;
		}
	}
	
	return resultado;
}


int main(int argc, char *argv[]) {
	
	int a,b;
	
	cout<<"Ingrese un numero: ";cin>>a;
	
	cout<<"\nIngrese la potencia al cual desea elevar: "; cin>>b;
	
	cout<<"El resultado es: "<<Potencia(a,b);
	
	return 0;
}

