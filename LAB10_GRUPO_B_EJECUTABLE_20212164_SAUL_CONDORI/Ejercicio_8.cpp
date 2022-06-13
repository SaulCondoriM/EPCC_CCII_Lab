#include<iostream>

using namespace std;

class Nodo{
public:
	int v;
	Nodo *siguiente;
	Nodo(){
		siguiente = NULL;
	}
};

class ListaEnlazada{
	Nodo *cabeza;
public:
	
	ListaEnlazada(){
		cabeza = NULL;
	}
	
	void Ordenar_Descendente(){
		Nodo* aux1 = cabeza;
		Nodo* aux2;

		while (aux1 != NULL){
			int aux;
			aux2 = aux1;
			while (aux2 != NULL)
			{
				if (aux1->v <= aux2->v)
				{
					aux = aux1->v;
					aux1->v = aux2->v;
					aux2->v = aux;
				}
				aux2 = aux2->siguiente;
			}
			aux1 = aux1->siguiente;
		}

		cout<<"\nLista ordenada de forma DESCENDENTE.";
	}

	void IngresarAlInicio(int v){
		Nodo *temp = new Nodo();
		temp->v = v;
		temp->siguiente = cabeza;
		cabeza = temp;
	}
	
	void IngresarAlFinal(int v){
		Nodo *temp = new Nodo();
		temp->v = v;
		if (cabeza == NULL){
			cabeza = temp;
		}
		else{

			Nodo *ptr = cabeza;
			
			while (ptr->siguiente != NULL){
				ptr = ptr->siguiente;
			}

			ptr->siguiente = temp;
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
int main() {
	cout<<"\n1) Ingresar elemento al final ";
	cout<<"\n2) Ingresar elemento al inicio ";
	cout<<"\n3) Ingresar elemento al medio ";
	cout<<"\n4) Borrar el primer elemento";
	cout<<"\n5) Borrar el ultimo elemento";
	cout<<"\n6) Borrar el elemento del medio";
	cout<<"\n7) Ordenar Ascendente";
	cout<<"\n8) Ordenar Descendente";
	cout<<"\n9) Mostrar la lista enlazada";
	cout<<"\n0) SALIR DEL MENU";

	cout<<endl;
	
	int opc,v,p;
	ListaEnlazada A;
	do {
		cout<<"\nIngrese una opcion válida: "; cin>>opc;
		switch (opc)
		{
		
		case 1:
			cout<<"Ingrese un elemento: "; cin>>v;
			A.IngresarAlFinal(v);
			break;
		
		case 2:
			cout<<"Ingrese un elemento: "; cin>>v;
			A.IngresarAlInicio(v);
			break;
		/*	
		case 3:
			cout<<"Ingrese un elemento "; cin>>v;
			cout<<"Ingrese la posicion a insertar "; cin>>p;
			A.InsertarEnMedio(v,p);
			break;
		
		case 4:
			A.BorrarElPrimero();
			break;
		
		case 5:
			A.BorrarElUltimo();
			break;
			
		case 6:
			cout<<"Ingrese la posicion del elemento a borrar: "; cin>>p;
			A.BorrarElMedio(p);
			break;
			
		case 7:
			A.Ordenar_Ascendente();
			break;
		*/	
		case 8:
			A.Ordenar_Descendente();
			break;
		
		
		case 9:
			A.Mostrar();
			break;
			
			
		}
	} while (opc != 0);

	
}