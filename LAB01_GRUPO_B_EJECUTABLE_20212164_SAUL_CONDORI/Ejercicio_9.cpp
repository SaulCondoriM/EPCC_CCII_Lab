#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int sum=0;
	
	for(int i=0; i<10; i++){
		
		int a=0;
		
		cout<<"\nIngrese un numero: "; cin>>a;
		
		if(a<0){
			sum += a;
		}
	}
	
	cout<<"\nLa suma de los numeros negativos es: "<<sum;
	
	return 0;
}

