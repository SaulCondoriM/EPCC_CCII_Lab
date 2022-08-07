#include <iostream>
using namespace std;

template<int T>

struct Sumar
{
	enum{ value = ( T % 10) + (Sumar <T/10> :: value)};
};

template<>
struct Sumar <0>
{
	enum{value = 0};
};

int main(int argc, char *argv[]) {
	
	int a {Sumar<1597753>::value};
	cout<<"\nLa suma de los digitos es: " << a;
	
	return 0;
}

