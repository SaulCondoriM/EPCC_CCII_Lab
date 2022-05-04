#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int M[5][3];
	int sum=0;
	
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese numero: "; cin>>M[i][j];
		}
	}
	cout<<"\nSu MATRIZ ES: "<<endl;
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=1; i<5;i += 2){
		for(int j=0; j<3; j++){
			sum += M[i][j];
		}
	}
	
	cout<<"\nLa suma de las filas pares es: "<<sum;
	
	
	
	return 0;
}

