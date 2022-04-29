#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cant;
	float a,b,c;
	
	cout<<"N de estudiantes? "; cin>>cant;
	
	for(int i=0; i<cant;i++){
		cout<<endl;
		cout<<"Estudiante "<<i+1<<endl;
		cout<<"\nIngrese la primera nota: "; cin>>a;
		cout<<"\nIngrese la primera nota: "; cin>>b;
		cout<<"\nIngrese la primera nota: "; cin>>c;
		cout<<"\nEl promedio del estudiante "<<i+1<<" es: "<<(a+b+c)/3;
	}
	
	return 0;
}

