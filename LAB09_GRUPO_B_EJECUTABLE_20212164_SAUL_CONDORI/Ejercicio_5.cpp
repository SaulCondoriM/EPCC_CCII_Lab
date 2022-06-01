#include <iostream>
using namespace std;

template <class N>
N Descendente(N A[5]);

template <class M>
M Ascendente(M B[5]);

int main(int argc, char *argv[]) {
	
	int A[5] = {10,7,2,85,6};
	float B[5] = {12.5,8.7,5.6,8.4,1.2};
	
	Descendente(A);
	Ascendente(A);
	
	cout<<endl;
	
	Descendente(B);
	Ascendente(B);
	
	return 0;
}

template <class N>
N Descendente(N A[5]){
	
	N aux = 0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			
			if(A[j] < A[j+1]){
				
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
				
			}
		}
	}
	
	cout<<"\nOrden Descendente: "<<endl;
	
	for(int i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
	
	
	return 0;
	
	
}
	
template <class M>
M Ascendente(M B[5]){
	
	M aux = 0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			
			if(B[j] > B[j+1]){
				
				aux = B[j];
				B[j] = B[j+1];
				B[j+1] = aux;
				
			}
		}
	}
	
	cout<<"\nOrden Ascendente: "<<endl;
	
	for(int i=0; i<5; i++){
		cout<<B[i]<<" ";
	}
	
	return 0;
	
}

