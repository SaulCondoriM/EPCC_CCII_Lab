#include <iostream>
using namespace std;

int sumar(int a, int b){
	return a+b;
}

int restar(int a, int b){
	return a-b;
}
	
int multiplicar(int a, int b){
	return a*b;
}

int dividir(int a, int b){
	return a/b;
}
	
int main(int argc, char *argv[]) {
	
	int opc, a, b;
	
	
	int (*Funciones[4])(int,int)={sumar,restar,multiplicar,dividir};
	
	cout<<"Ingrese el primer valor: "; cin>>a;
	cout<<"Ingrese el segundo valor: "; cin>>b;
	
	cout<<"\n OPCIONES "<<endl;
	cout<<"\n 0:SUMA ";
	cout<<"\n 1:RESTA ";
	cout<<"\n 2:MULTIPLICACION ";
	cout<<"\n 3:DIVISION"<<endl;
	
	cout<<"\nIngrese una opcion valida: "; cin>>opc;
	
	while(opc >= 0 && opc<=3){
		
		cout<<"El resultado de la operacion es: "<<(*Funciones[opc])(a,b)<<endl;
		
		cout<<"\nIngrese una opcion valida: "; cin>>opc;
		
	}

	return 0;
}

