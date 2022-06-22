#include <iostream>
using namespace std;

struct persona{
	string nombre;
	string grupo;
	float nota1;
	float nota2;
	float nota3;
	float nota_proyecto;
} alumnos[100];

float calcularNota(persona p){
	
	float notaFinal = p.nota1 * 0.15 + p.nota2 * 0.20 + p.nota3 * 0.25 + p.nota_proyecto * 0.40;
	
	return notaFinal;
	
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cout<<"\nIngrese la cantidad de personas: "; cin>>n;
	
	for(int i=0; i<n; i++){
		
		cout<<endl;
		
		string nom = " ", grupo = " ";
		float n1=0, n2=0, n3=0, np=0; 
		
		cout<<"\nIngrese el nombre del alumno: "; cin>> nom;
		cout<<"\nIngrese su grupo: "; cin>> grupo;
		cout<<"\nIngrese la nota 1_Fase: "; cin>> n1;
		cout<<"\nIngrese la nota 2_Fase: "; cin>> n2;
		cout<<"\nIngrese la nota 3_Fase: "; cin>> n3;
		cout<<"\nIngrese la nota del Proyecto: "; cin>> np;
		
		alumnos[i] = {nom,grupo,n1,n2,n3,np};
		
	}
	
	cout<<endl;
	cout<<"\nMOSTRANDO ALUMNOS"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"\nAlumno: "<<alumnos[i].nombre;
		cout<<"\nGrupo: "<<alumnos[i].grupo;
		cout<<"\nNota Fase 1: "<<alumnos[i].nota1;
		cout<<"\nNota Fase 2: "<<alumnos[i].nota2;
		cout<<"\nNota Fase 3: "<<alumnos[i].nota3;
		cout<<"\nNota Proyecto: "<<alumnos[i].nota_proyecto; 
		cout<<"\nNOTA FINAL: "<<calcularNota(alumnos[i]);
		
	}
	return 0;
}

