#include <iostream>
using namespace std;

struct persona{
	string nombre;
	int edad;
	float talla;
} jugadores[100];

bool Comprobar(persona p){
	if(p.edad < 20 && p.talla > 1.70){
		return true;
	}
	return false;
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cout<<"\nIngrese la cantidad de personas: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		
		string nom="";
		int ed = 0;
		float tall = 0;
		
		cout<<"\nIngrese su nombre: "; cin>>nom;
		cout<<"\nIngrese su edad: "; cin>>ed;
		cout<<"\nIngrese su talla: "; cin>>tall;
		
		jugadores[i] = {nom,ed,tall};
	}
	
	cout<<endl;
	cout<<"\nMOSTRANDO JUGADORES MENORES A 20 AÑOS Y TALLA MAYOR A 1.70 MTS"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		if(Comprobar(jugadores[i])){
			cout<<"\nNombre: "<<jugadores[i].nombre;
			cout<<"\nEdad: "<<jugadores[i].edad;
			cout<<"\nTalla: "<<jugadores[i].talla<<" metros";
		}
	}
	
	return 0;
}

