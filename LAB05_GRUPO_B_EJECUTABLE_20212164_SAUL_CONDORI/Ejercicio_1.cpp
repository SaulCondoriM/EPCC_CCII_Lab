#include <iostream>
using namespace std;

void intercambiar(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

int main(int argc, char *argv[]) {
	
	int a,b;
	
	cout<<"Ingrese el primer valor a intercambiar: ";cin>>a;
	cout<<"Ingrese el segundo valor a intercambiar: ";cin>>b;
	
	cout<<"\nSus valores son: a = "<<a<<"  b: "<<b<<endl;
	
	intercambiar(&a,&b);
	cout<<"\nDespues del intercambio: "<<endl;
	
	cout<<"\nSus valores son: a = "<<a<<"  b: "<<b;

	return 0;
}

