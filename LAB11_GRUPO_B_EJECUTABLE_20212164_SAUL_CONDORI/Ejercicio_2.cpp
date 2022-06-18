#include <iostream>
using namespace std;

class Nodo{
public:
	int v;
	Nodo *siguiente;
	Nodo(){
		siguiente = NULL;
	}
};

class Pila{
	Nodo *cabeza;
public:
	Pila(){
		cabeza = NULL;
	}
	
	void Insertar(int v){
		Nodo *temp = new Nodo();
		temp->v = v;
		temp->siguiente = cabeza;
		cabeza = temp;
	}
	
	void Eliminar(){
		if (cabeza == NULL){
			cout<<"La lista esta vacía"<<endl;
		}
		else{
			cout<<"Elemento Borrado: "<<cabeza->v<<endl;
			
			Nodo *temp = cabeza;
			
			cabeza = cabeza->siguiente;
			
			delete(temp);
		}
	}
		
	void Mostrar(){
		if (cabeza == NULL){
			cout<<"La lista esta vacia"<<endl;
		}
		else{
			Nodo *temp = cabeza;
			cout<<"LISTA: ";
			while (temp != NULL){
				cout<<temp->v<<"->";
				temp = temp->siguiente;
			}
			cout<<"NULL"<<endl;
		}
	}
	
};
int main(int argc, char *argv[]) {
	
	cout<<"\n1) Insertar Elemento ";
	cout<<"\n2) Eliminar Elemento";
	cout<<"\n3) Buscar elemento ";
	cout<<"\n4) Mostrar Pila";
	cout<<"\n0) SALIR DEL MENU ";
	
	cout<<endl;
	
	int opc,v;
	
	Pila A;
	
	do {
		cout<<"\nIngrese una opcion valida: "; cin>>opc;
		switch (opc)
		{
		case 1:
			cout<<"Ingrese un elemento: "; cin>>v;
			A.Insertar(v);
			break;
			
		case 2:
			A.Eliminar();
			break;
		/*	
		case 3:
			cout<<"Ingrese el elemento a buscar: "; cin>>v;
			A.Buscar(v);
			break;
		*/	
		case 4:
			A.Mostrar();
			break;
		}
		
	} while (opc != 0);
	
	return 0;
}

