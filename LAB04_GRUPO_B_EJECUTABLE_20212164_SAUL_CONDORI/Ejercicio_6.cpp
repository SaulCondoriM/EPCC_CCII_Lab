#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int M[3][3];
	int sumaF=0, mayorF=0;
	
	
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese numero: "; cin>>M[i][j];
		}
	}
	cout<<"\nSu MATRIZ ES: "<<endl;
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0; i<3;i++){
		sumaF=0;
		
		for(int j=0; j<3; j++){
			sumaF += M[i][j];
			if(sumaF > mayorF){
				mayorF = sumaF;
			}
		}
		
	}
	
	
	
	
	cout<<"\nLa suma de la fila mayor es: "<<mayorF;
	
	
	return 0;
}

