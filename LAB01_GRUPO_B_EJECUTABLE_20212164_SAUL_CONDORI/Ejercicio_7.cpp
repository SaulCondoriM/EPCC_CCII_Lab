#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a,b;
	
	cout<<"Ingresa un numero: "; cin>>a;
	
	cout<<"Ingresa un numero: "; cin>>b;
	
	if(a%b==0){
		cout<<"\nEl numero "<<b<<" es divisor de "<<a;
	}
	
	else if(b%a==0){
		cout<<"\nEl numero "<<a<<" es divisor de "<<b;
	}
	
	else{
		cout<<"\nNinguno de los dos es divisor del otro";
	}
	
	return 0;
}

