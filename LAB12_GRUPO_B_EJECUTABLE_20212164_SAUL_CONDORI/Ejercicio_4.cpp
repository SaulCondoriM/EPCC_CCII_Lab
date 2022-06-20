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

class Cola{
	Nodo *cabeza;
	Nodo *cola;
public:
	Cola(){
		cabeza = NULL;
		cola = NULL;
	}
	
	void Insertar(int v){
		Nodo *temp = new Nodo();
		temp->v = v;
		temp->siguiente = NULL;
		
		if(cabeza == NULL){
			cabeza = temp;
		}
		else{
			cola->siguiente = temp;
		}
		
		cola = temp;
	}
		
	void Eliminar(){
		if (cabeza == NULL){
			cout<<"La cola esta vacía"<<endl;
		}
		else{
			
			Nodo *temp = cabeza;
			
			cabeza = cabeza->siguiente;
			
			delete(temp);
		}
		
			
	}
			
	bool Buscar(int b){
		
		Nodo *temp = cabeza;
		
		while (temp != NULL){
			if(temp->v == b){
				cout<<"\nEl elemento "<<b<< " SI fue encontrado."<<endl; return true;
			}
			temp = temp->siguiente;
		}
		cout<<"\nEl elemento " <<b<< " No fue encontrado"<<endl;
		return false;
			
		
	}
				
	void Mostrar(){
		if (cabeza == NULL){
			cout<<"La Cola esta vacia"<<endl;
		}
		else{
			Nodo *temp = cabeza;
			cout<<"COLA: ";
			while (temp != NULL){
				cout<<temp->v<<"->";
				temp = temp->siguiente;
			}
			cout<<"NULL"<<endl;
		}
	}
					
	int getPrimerElemento(){
		
		return cabeza->v;
						
	}
						
};

bool CompararMayor(Cola H, Cola M){
	int temp1=0, temp2 = 0;
	
	temp1 = H.getPrimerElemento();
	H.Eliminar();
	H.Insertar(temp1);
	
	temp2 = M.getPrimerElemento();
	M.Eliminar();
	M.Insertar(temp2);
	
	if(temp1 > temp2){
		return true;
	}
	
	return false;
}
	
void IterarEntreColas(Cola Hombres, Cola Mujeres){
	
	string ganadorMayor;
	int n;
	
	cout<<"Cuantas veces desea iterar? "; cin >> n;
	
	for (int i = 0; i < n; i++){
		
		if (CompararMayor(Hombres, Mujeres)){
			ganadorMayor = "hombre";
		}
		else{
			ganadorMayor = "mujer";
		}
	}
	
	if (ganadorMayor == "hombre"){
		
		cout<<"\nLos HOMBRES son mayores despues de las "<<n<< " iteraciones"<<endl;
	}
	else{
		cout<<"\nLas MUJERES son mayores despues de las "<<n<< " iteraciones"<<endl;
	}
		
}
int main(int argc, char *argv[]) {
			
	Cola Hombres;
	Cola Mujeres;
			
			
	Hombres.Insertar(15);
	Hombres.Insertar(8);
	Hombres.Insertar(20);
	Hombres.Insertar(21);
			
	Mujeres.Insertar(19);
	Mujeres.Insertar(7);
	Mujeres.Insertar(22);
			
	cout<<"\nCola Hombres: "<<endl;
	Hombres.Mostrar();
	cout<<"\nCola Mujeres: "<<endl;
	Mujeres.Mostrar();
			
	IterarEntreColas(Hombres, Mujeres);
			
	cout<<"\nCola Hombres: "<<endl;
	Hombres.Mostrar();
	cout<<"\nCola Mujeres: "<<endl;
	Mujeres.Mostrar();
	return 0;
}
		
		
