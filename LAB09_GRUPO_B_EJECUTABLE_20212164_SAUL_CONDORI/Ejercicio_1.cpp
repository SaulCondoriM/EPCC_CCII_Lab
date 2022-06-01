#include <iostream>
using namespace std;

template <class T>
T MenorMayor(T num1, T num2, T num3);

int main(int argc, char *argv[]) {
	
	MenorMayor(15,54,1);
	MenorMayor(2.7,65.8,23.1);
	

	return 0;
}

template <class T>
T MenorMayor(T num1, T num2, T num3){
	
	T mayor = 0;
	T menor = 0;

	if(num1>num2 && num2>num3){mayor = num1; menor = num3;}
	if(num1>num3 && num3>num2){mayor = num1; menor = num2;}
	if(num2>num3 && num3>num1){mayor = num2; menor = num1;}
	if(num2>num1 && num1>num3){mayor = num2; menor = num3;}
	if(num3>num2 && num2>num1){mayor = num3; menor = num1;}
	if(num3>num1 && num1>num2){mayor = num3; menor = num2;}
	
	cout<<"\nEl numero mayor es: "<<mayor;
	cout<<"\nEn numero menor es: "<<menor;
	cout<<endl;
	
	return 0;
	
}
