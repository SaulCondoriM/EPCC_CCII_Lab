#include <iostream>
using namespace std;

template<int T, int U>
struct Potencia
{
	enum{value = T *(Potencia<T, U-1>::value)};
};

template<int T>
struct Potencia<T,0>
{
	enum{value = 1};
};

int main(int argc, char *argv[]) {
	
	int a{Potencia<2,4>::value};
	cout<<"\n2 elevado a 4 es: " << a;
	
	cout<<endl;
		
	int b{Potencia<3,2>::value};
	cout<<"\n3 elevado a 2 es: " << b;
	
	return 0;
}

