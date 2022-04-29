#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int x,y;
	int valores;
	int primo=0;
	int divisores=0;
	
	cout<<"Ingrese el primer rango: "; cin>>x;
	cout<<"Ingrese el segundo rango: "; cin>>y;

	for(valores=x;valores<=y;valores++){
		primo=0;
		
		for(divisores=2;divisores<valores-1 && primo==0;divisores++){
			
			if(valores%divisores==0) primo=1;
		}
		
		if(primo==0){
			cout<<valores<<endl;
		}
	}
	
	
	return 0;
}

