#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	string Productos[10];
	int Precios[10];
	int Cantidad[10];
	
	string buscar;
	
	string modificar;
	
	
	for(int i=0; i<10; i++){
		cout<<endl;
		cout<<"Producto "<<i+1;
		cout<<"\nIngresa un producto nuevo: "; cin>>Productos[i];
		cout<<"Ingrese el precio de "<<Productos[i]<<" :"; cin>>Precios[i];
		cout<<"Ingrese la cantidad del producto: ";cin>>Cantidad[i];
	}
	
	
	cout<<"\nIngrese el producto a buscar: "; cin>>buscar;
	
	for(int i=0; i<10; i++){
		if(buscar==Productos[i]){
			cout<<"\nEl producto SI ESTA";
		}
	}
	
	cout<<"Ingrese el producto que desea modificar: "; cin>>modificar;
	
	for(int i=0; i<10; i++){
		if(modificar==Productos[i]){
			cout<<"\nIngrese el nuevo precio del producto: "; cin>>Precios[i];
			cout<<"\nIngrese el nuevo stock del producto: "; cin>>Cantidad[i];
		}
	}
	

	
	return 0;
}

