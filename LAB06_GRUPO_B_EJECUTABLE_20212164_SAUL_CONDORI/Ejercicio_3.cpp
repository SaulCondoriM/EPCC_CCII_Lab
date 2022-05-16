#include <iostream>
using namespace std;

class calc_Edad{
private:
	int edad;
	
	int diaNac;
	int mesNac;
	int anoNac;
	
	int diaAc;
	int mesAc;
	int anoAc;
public:
	calc_Edad();
	calc_Edad(int,int,int, int, int, int);
	~calc_Edad();
	
	void Ingresar();
	void Calcular();
	
};

calc_Edad::calc_Edad(){
	
	diaAc = 12;
	mesAc = 05;
	anoAc = 2022;
	
	
}

calc_Edad::calc_Edad(int _diaNac, int _mesNac, int _anoNac , int _diaAc, int _mesAc, int _anoAc){
	
	diaNac = _diaNac;
	mesNac = _mesNac;
	anoNac = _anoNac;
	
	diaAc = _diaAc;
	mesAc = _mesAc;
	anoAc = _anoAc;
	
}

calc_Edad::~calc_Edad(){}


void calc_Edad::Ingresar(){
	cout<<"\nIngrese su fecha de nacimiento: "<<endl;
	
	cout<<"Dia Nacimiento: "; cin>>diaNac;
	cout<<"\nMes Nacimiento: "; cin>>mesNac;
	cout<<"\nAño de Nacimiento: "; cin>>anoNac;
}

void calc_Edad::Calcular(){
	edad = anoAc - anoNac;
	
	if(mesNac > mesAc){
		edad -= 1;
	}
	else if(mesAc == mesNac){
		if(diaNac > diaAc){
			edad -= 1;
		}
	}
	
	cout<<"\nTu edad es: "<<edad;
	
}

int main(int argc, char *argv[]) {
	
	calc_Edad pers1;
	
	pers1.Ingresar();
	
	pers1.Calcular();
	
	
	return 0;
}
