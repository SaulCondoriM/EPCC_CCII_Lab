#include <iostream>
using namespace std;

void Primos(int x){

	int valores;
	int primo=0;
	int divisores=0;
	
	
	for(valores=2;valores<=x;valores++){
		primo=0;
		for(divisores=2;divisores<valores-1 && primo==0;divisores++){
			if(valores%divisores==0) primo=1;
		}
		if(primo==0){
			cout<<valores<<endl;
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	int x;
	
	cout<<"Hasta que numeros primos desea ver? ";cin>>x;
	
	Primos(x);
	
	return 0;
}

