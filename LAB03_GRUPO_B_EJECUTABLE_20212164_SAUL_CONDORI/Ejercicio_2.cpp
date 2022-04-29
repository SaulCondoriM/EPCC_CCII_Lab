#include <iostream>
using namespace std;

bool Bisiesto(int a){
	
	if(a%4 != 0){
		return false;
	}
	else if(a%100 != 0){
		return true;
	}
	else if(a%400 != 0){
		return false;
	}
	return false;
}

int main(int argc, char *argv[]) {
	
	int a;
	
	cout<<"Ingrese el a�o que desea comprobar: ";cin>>a;
	
	if(Bisiesto(a)==true){
		cout<<"\nEl a�o "<<a<<" SI ES BISIESTO";
	}
	else{
		cout<<"\nEl a�o "<<a<<" NO ES BISIESTO";
	}
	
	return 0;
}

