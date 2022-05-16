#include <iostream>
using namespace std;

class Alumno{
private:
	int CUI;
	string Nombre[3];
	float Notas[3];
public:
	Alumno();
	Alumno(int, string, string, string, float, float, float);
	~Alumno();
	void Ingresar();
	void Mostrar();

};

Alumno::Alumno(){
	
}

Alumno::Alumno(int _CUI, string _Nombre, string _Paterno,string _Materno, float _nota1, float _nota2, float _nota3){
	CUI = _CUI;
	Nombre[0] = _Nombre;
	Nombre[1] = _Paterno;
	Nombre[2] = _Materno;
	
	Notas[0] = _nota1;
	Notas[1] = _nota2;
	Notas[2] = _nota3;
}
Alumno::~Alumno(){}

void Alumno::Ingresar(){
	
	cout<<"Ingrese su CUI: "; cin>>CUI;
	cout<<"\nIngrese su primer nombre: "; cin>>Nombre[0];
	cout<<"\nIngrese su apellido paterno: "; cin>>Nombre[1];
	cout<<"\nIngrese su apellido materno: "; cin>>Nombre[2];
	cout<<endl;
	
	for(int i=0; i<3; i++){
		cout<<"Ingrese su nota "<<i+1<<" :"; cin>>Notas[i];
	}
}

void Alumno::Mostrar(){
	cout<<"\nCUI : "<<CUI;
	cout<<"\nPRIMER NOMBRE: "<<Nombre[0];
	
	float nota_final = (Notas[0] + Notas[1] + Notas[2])/3.0;
	
	cout<<"\nPROMEDIO: "<<nota_final;
	
	if(nota_final >= 10.5){
		cout<<"\nEl alumno SI APROBO";
	}
	else{
		cout<<"\nEl alumno NO APROBO";
	}
}

	
int main(int argc, char *argv[]) {
	
	//Alumno alum1 = Alumno(20212164, "Saul", "Condori", "Machaca", 15, 16, 18);
	
	Alumno alum1;
	
	alum1.Ingresar();
	alum1.Mostrar();
	
	
	
	return 0;
}

