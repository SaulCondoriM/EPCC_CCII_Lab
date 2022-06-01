#include <iostream>
using namespace std;

template <class N>
N Menor(N A[5]);

template <class M>
M Mayor(M B[5]);

int main(int argc, char *argv[]) {
	
	int A[5] = {10,7,2,85,6};
	float B[5] = {12.5,8.7,5.6,8.4,1.2};
	
	cout<<"\nEl MAYOR elemento es: "<<Mayor(A);
	cout<<"\nEl MENOR elemento es: "<<Menor(A);
	
	cout<<endl;
	
	cout<<"\nEl MAYOR elemento es: "<<Mayor(B);
	cout<<"\nEl MENOR elemento es: "<<Menor(B);
	
	return 0;
}

template <class N>
N Menor(N A[5]){
	
	N menor = A[0];
	
	for(int i=0; i<5; i++){
		if(menor > A[i]){
			menor = A[i];
		}
		
	}
	
	return menor;
	
	
}
	
template <class M>
M Mayor(M B[5]){
	
	
	M mayor = B[0];
	
	for(int i=0; i<5; i++){
		
		if(mayor < B[i]){
			mayor = B[i];
		}
	}
	
	return mayor;
	
}
	
	

