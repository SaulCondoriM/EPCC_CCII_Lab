#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
struct Nodo{
	
	T valor;
	Nodo* siguiente;
};

template <class T>
class ListaEnlazada{
private:
	Nodo<T>* cabeza;
public:
	ListaEnlazada(){ 
		cabeza = NULL; 
	}
	void Insertar(T d);
	void Mostrar();
};

template <class T>
void ListaEnlazada<T>::Insertar(T d)
{
	Nodo<T> *listEnlaz = new Nodo<T>;
	listEnlaz->valor = d;
	
	listEnlaz->siguiente = cabeza;
	cabeza = listEnlaz;
}

template <class T>
void ListaEnlazada<T>::Mostrar(){
	
	Nodo<T>* listaActual = cabeza;
	while( listaActual != NULL ){
		
		cout << listaActual->valor << " -> ";
		listaActual = listaActual->siguiente;
	}
}
int main(int argc, char *argv[]) {
	
	cout<<"\nLISTA ENLAZADA DE 100 NUMEROS ALEATORIOS"<<endl;
	
	int arrNum[100] ;
	srand(time(0));
	
	//GENERANDO NUMEROS ALEATORIOS
	
	for(int i = 0; i < 100; i++){
		arrNum[i] = rand() % 101;
	}
	
	ListaEnlazada<int> numeros;
	
	for(int i = 0; i < 100; i++){
		numeros.Insertar(arrNum[i]);
	}
	
	numeros.Mostrar();
	
	cout<<endl;
	cout<<"\nLISTA ENLAZADA DE 100 LETRAS ALEATORIAS"<<endl;
	
	int arrLetr[100] ;
	
	
	//GENERANDO LETRAS ALEATOREAS
	
	for(int i = 0; i < 100; i++){
		arrLetr[i] = 'a' + rand() % 26;
	}
	
	
	ListaEnlazada<char> letras;
	
	for(int i = 0; i < 100; i++){
		letras.Insertar(arrLetr[i]);
	}
	
	
	letras.Mostrar();
	
	return 0;
}

