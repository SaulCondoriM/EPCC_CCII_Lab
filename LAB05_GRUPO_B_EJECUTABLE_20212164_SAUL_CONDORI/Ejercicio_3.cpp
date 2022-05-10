#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void Insertar_Valor(Nodo *&Numeros,int n){
	Nodo *NodoNuevo = new Nodo();
	NodoNuevo->dato=n;
	
	Nodo *aux1=Numeros;
	Nodo *aux2;
	
	while((aux1 != NULL)&& (aux1->dato <n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(Numeros == aux1){
		Numeros = NodoNuevo;
	}
	else{
		aux2->siguiente=NodoNuevo;
	}
	NodoNuevo->siguiente=aux1;
}
void Mostrar(Nodo *Numeros){
	Nodo *actual=new Nodo();
	actual=Numeros;
	while(actual!=NULL){
		cout<<actual->dato<<"  ";
		actual=actual->siguiente;
	}
}
void Eliminar(Nodo *&Numeros,int n){
	if(Numeros != NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=Numeros;
		
		while((aux_borrar !=NULL)&& (aux_borrar->dato!=n)){
			anterior =aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar == NULL){
			cout<<" El elemento no existe \n";
		}
		else if(anterior == NULL){
			Numeros = Numeros ->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}
int main(){
	int n,dato,num;
	Nodo *Numeros=NULL;
	
	cout<<"\nCuantos numeros desea agregar? "; cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese un numero: ";cin>>dato;
		Insertar_Valor(Numeros,dato);
	}
	Mostrar(Numeros);
	cout<<"\nIngrese el numero a eliminar ";cin>>num;
	Eliminar(Numeros,num);
	cout<<"Despues de eliminar: "<<endl;
	cout<<endl;
	Mostrar(Numeros);
	Numeros=NULL;
	
	return 0;
}
