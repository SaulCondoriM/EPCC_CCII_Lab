#include <iostream>
using namespace std;

template<int T>
struct Binario
{
	enum{dig = (Binario<T/2>::dig)*10+(T%2)};
};

template<>
struct Binario<0>
{
	enum{dig = 0};
	
};

int main(int argc, char *argv[]) {
	
	int a = Binario<122>::dig;
	int b = Binario<34>::dig;
	
	cout<<"\nEl numero 122 en binario es: " << a;
	cout<<"\nEl numero 34 en binario es :" << b;
	
	return 0;
}

