#include <iostream>
using namespace std;

struct persona{
	
	string nombre;
	int dia;
	int mes;
	int anio;
} companieros[100];

bool Cumple(persona p1){

	//ESTAMOS EN EL MES 6

	if(p1.mes == 6){
		return true;
	}
	return false;
}
	

int main(int argc, char *argv[]) {
	
	int n;
		
	cout<<"\nIngrese la cantidad de personas: "; cin>>n;
	
	for(int i=0; i<n; i++){
	
		cout<<endl;
		
		string nom = " ";
		int d = 0, m = 0, a = 0;
		
		cout<<"\nIngrese el nombre del alumno: "; cin>> nom;
		cout<<"\nIngrese el dia de nacimiento: "; cin>> d;
		cout<<"\nIngrese el mes de nacimiento: "; cin>>m;
		cout<<"\nIngrese el año de nacimiento: "; cin>>a;
		
		companieros[i] = {nom,d,m,a};
			
	}
	cout<<endl;
	cout<<"\nMOSTRANDO ALUMNOS"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"\nAlumno: "<<companieros[i].nombre;
		cout<<"\nFecha nacimiento: "<<companieros[i].dia<<" ,"<<companieros[i].mes<<" ,"<<companieros[i].anio;
		if(Cumple(companieros[i])){
			cout<<"\n"<<companieros[i].nombre<< " SI cumple años este mes.";
		}
		
	}
	
	
	return 0;
}
	
	
