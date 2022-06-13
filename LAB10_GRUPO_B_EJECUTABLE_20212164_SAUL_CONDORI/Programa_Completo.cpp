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
	
	void InsertarEnMedio(int v, int p){
		Nodo *temp = new Nodo();
		temp->v = v;
		if (p == 0){

			temp->siguiente = cabeza;
			cabeza = temp;
		}
		else{
			Nodo *ptr = cabeza;

			while(p>1) {
				ptr = ptr->siguiente;
				--p;
			}

			temp->siguiente = ptr->siguiente;
			ptr->siguiente = temp;
		}
	}
	
	void BorrarElPrimero(){
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
	
	void BorrarElUltimo(){
		if (cabeza == NULL){
			cout<<"La lista esta vacia"<<endl;
		}
		else if (cabeza->siguiente == NULL){
			
			cout<<"Elemento Borrado: "<<cabeza->v<<endl;
			delete(cabeza);
			cabeza = NULL;
		}
		else{

			Nodo *temp = cabeza;
			
			while (temp->siguiente->siguiente != NULL) {
				temp = temp->siguiente;
			}
			
			cout<<"Elemento Borrado: "<<temp->siguiente->v<<endl;
			
			delete(temp->siguiente);
			
			temp->siguiente = NULL;
		}					
	}
		
	void BorrarElMedio(int p){
		if (cabeza == NULL){
			
			cout<<"La lista esta vacia"<<endl;
		}
		else{
			Nodo *temp, *ptr;
			if (p == 0) {
				
				cout<<"Elemento borrado: "<<cabeza->v<<endl;
				ptr = cabeza;
				cabeza = cabeza->siguiente;
				delete(ptr);
			}
			else{
				
				temp = ptr = cabeza;
				while(p>0){
					--p;
					temp = ptr;
					ptr = ptr->siguiente;
				}
				cout<<"Elemento Borrado: "<<ptr->v<<endl;
				
				temp->siguiente = ptr->siguiente;
				
				free(ptr);
			}
		}	
	}
	
	void Ordenar_Ascendente(){
		Nodo* aux1 = cabeza;
		Nodo* aux2;

		while (aux1 != NULL){
			int aux;
			aux2 = aux1;
			while (aux2 != NULL)
			{
				if (aux1->v >= aux2->v)
				{
					aux = aux1->v;
					aux1->v = aux2->v;
					aux2->v = aux;
				}
				aux2 = aux2->siguiente;
			}
			aux1 = aux1->siguiente;
		}
		cout<<"\nLista ordenada de forma ASCENDENTE.";
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
			
		case 8:
			A.Ordenar_Descendente();
			break;

		case 9:
			A.Mostrar();
			break;
			
			
		}
	} while (opc != 0);
	
}
