#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char nombre[50];
	char apellido_p[50];
	char apellido_m[50];
	
	cout<<"Ingrese nombre: "; cin>>nombre;
	
	cout<<"\nIngrese Apellido Paterno: "; cin>>apellido_p;
	
	cout<<"\nIngrese Apellido Materno: "; cin>>apellido_m;
	
	cout<<"\nSu correo Unsa es: "<<nombre[0]<<apellido_p<<apellido_m[0]<<"@unsa.edu.pe";
	
	
	return 0;
}
