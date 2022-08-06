#include <iostream>
using namespace std;

template <typename T, typename U>

class OperacionesBasicas{
private:
	T x;
	U y;
public:
	OperacionesBasicas(T x, U y);
	
	U Suma(){
		return x + y;
	};
		
	U Resta(){
		return x - y;
	};
	U Multiplicacion(){
		return x * y;
	};
	U Division(){
		return x / y;
	}
	
};

template <typename T, typename U>
OperacionesBasicas <T,U> :: OperacionesBasicas(T x, U y){
	this->x = x;
	this->y = y;
}

int main(int argc, char *argv[]) {
	
	OperacionesBasicas<int, float> Calculadora (18, 3.1);
	
	cout<<"\nSUMA"<<endl;
	cout<<Calculadora.Suma()<<endl;
	
	cout<<"\nRESTA"<<endl;
	cout<<Calculadora.Resta()<<endl;
	
	cout<<"\nMULTIPLICACION"<<endl;
	cout<<Calculadora.Multiplicacion()<<endl;
	
	cout<<"\nDIVISION"<<endl;
	cout<<Calculadora.Division()<<endl;
	
	
	
	return 0;
}

