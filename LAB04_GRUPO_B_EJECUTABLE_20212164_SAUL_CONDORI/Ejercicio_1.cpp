#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string Nombres[3];
	string Apellidos[3];
	int Edad[3];
	int DNI[3];
	
	for(int i=0; i<3; i++){
		cout<<endl;
		cout<<"\nPersona "<<i+1<<" :"<<endl;
		cout<<"Ingrese Nombre: "; cin>>Nombres[i];
		cout<<"Ingrese Apellido: "; cin>>Apellidos[i];
		cout<<"Ingrese Edad: "; cin>>Edad[i];
		cout<<"Ingrese DNI: ";cin>>DNI[i];
	}
	
	for(int i=0; i<3; i++){
		cout<<"\nPersona "<<i+1<<" :"<<endl;
		cout<<"\nNombre: "<<Nombres[i];
		cout<<"\nApellido: "<<Apellidos[i];
		cout<<"\nEdad: "<<Edad[i];
		cout<<"\nDNI: "<<DNI[i];
	}
	
	return 0;
}

