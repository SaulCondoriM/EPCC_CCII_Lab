#include <iostream>
using namespace std;

template <class C>

C Correo(C a, C b);

int main(int argc, char *argv[]) {
	
	
	Correo("s","condori");
	
	return 0;
}

template <class C>
C Correo(C a, C b){
	
	cout<<"\nSu correo es: ";
	cout<<a<<b<<"@unsa.edu.pe";
	
	return 0;
	
}


