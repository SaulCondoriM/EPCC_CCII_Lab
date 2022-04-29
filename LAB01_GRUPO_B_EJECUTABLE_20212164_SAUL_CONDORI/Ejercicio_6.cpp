#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int decimal;
	int binario[8];
	
	cout<< "Ingrese el decimal entre 100 y 999: ";cin >> decimal;
	
	if(decimal>100 && decimal<999){
		
		for (int i = 0; i < 8; i++){
			binario[i] = decimal % 2;
			decimal /= 2;
		}
		
		cout<<"\nEl numero convertido a binario es: ";
		
		for (int i = 7; i >= 0; i--){
			cout << binario[i];
		}
	}
	else{
		cout<<"\nError, asegurese de que el numero sea mayor que 100 y menor que 999";
	}
	
	return 0;
}

