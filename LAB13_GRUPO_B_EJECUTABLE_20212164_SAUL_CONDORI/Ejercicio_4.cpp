#include <iostream>
using namespace std;

struct persona{
	string nombre;
	string sexo;
	float sueldo;
}empleados[100];


int main(int argc, char *argv[]) {
	
	int n;
	
	float mayorSueldo;
	float menorSueldo;
	
	int posMayor = 0;
	int posMenor = 0;
	
	cout<<"\nIngrese la cantidad de empleados: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		
		string nom = "", sex = "";
		float suel = 0;
	
		
		cout<<"\nIngrese su nombre: "; cin>>nom;
		cout<<"\nCual es su sexo: "; cin>>sex;
		cout<<"\nIngrese su sueldo: "; cin>>suel;
		
		empleados[i] = {nom,sex,suel};
		
	}
	
	menorSueldo = empleados[0].sueldo;
	mayorSueldo = empleados[0].sueldo;
	
	for(int i=0; i<n; i++){
		if(empleados[i].sueldo > mayorSueldo){
			mayorSueldo = empleados[i].sueldo;
			posMayor = i;
		}
		
		if(empleados[i].sueldo < menorSueldo){
			menorSueldo = empleados[i].sueldo;
			posMenor = i;
		}
	}
	
	cout<<endl;
	cout<<"\nMOSTRANDO EL EMPLEADO CON MAYOR SUELDO";
	
	cout<<"\nNombre: " << empleados[posMayor].nombre;
	cout<<"\nSexo: " << empleados[posMayor].sexo;
	cout<<"\nSueldo: " << empleados[posMayor].sueldo << " soles";
	
	cout<<endl;
	cout<<"\nMOSTRANDO EL EMPLEADO CON MENOR SUELDO";
	cout<<"\nNombre: " << empleados[posMenor].nombre;
	cout<<"\nSexo: " << empleados[posMenor].sexo;
	cout<<"\nSueldo: " << empleados[posMenor].sueldo << " soles";
	
	return 0;
}

