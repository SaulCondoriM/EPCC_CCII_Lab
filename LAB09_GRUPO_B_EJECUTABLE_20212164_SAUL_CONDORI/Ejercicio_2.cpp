#include <iostream>
using namespace std;

template <class S>
S Suma(S num1, S num2);

template <class R>
R Resta(R num1, R num2);

template <class M>
M Multiplicacion(M num1, M num2);

template <class D>
D Division(D num1, D num2);

int main(int argc, char *argv[]) {
	
	cout<<"\nSUMA:"<<endl;
	cout<<Suma(15,14)<<endl;
	cout<<Suma(18.154,1.14)<<endl;
	
	cout<<endl;
	
	cout<<"\nRESTA:"<<endl;
	cout<<Resta(78,45)<<endl;
	cout<<Resta(15.1,3.4)<<endl;
	
	cout<<endl;
	
	cout<<"\nMULTIPLICACION:"<<endl;
	cout<<Multiplicacion(7,8)<<endl;
	cout<<Multiplicacion(14.2,2.1)<<endl;
	
	cout<<endl;
	
	cout<<"\nDIVISION:"<<endl;
	cout<<Division(82,2)<<endl;
	cout<<Division(52.4,2.2)<<endl;
	
	
	
	
	return 0;
}

template <class S>
S Suma(S num1, S num2){
	
	return num1 + num2;
}

template <class R>
R Resta(R num1, R num2){
	
	return num1 - num2;
}

template <class M>
M Multiplicacion(M num1, M num2){
	
	return num1 * num2;
}

template <class D>
D Division(D num1, D num2){
	
	return num1 / num2;
}

