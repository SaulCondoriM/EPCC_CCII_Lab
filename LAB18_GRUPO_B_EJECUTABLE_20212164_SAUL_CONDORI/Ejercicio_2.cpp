#include <iostream>
using namespace std;

template<int T>

struct Fibonacci
{
	enum{ num = Fibonacci<T-1>::value, value = num + Fibonacci<T-1>::num};
};

template<>
struct Fibonacci <2>
{
	enum{num = 0, value = 0+1};
};

template<>
struct Fibonacci <1>
{
	enum{num = 0, value = 0};
};

int main(int argc, char *argv[]) {
	
	int a{Fibonacci<7>::value};
	cout<<"\nEl numero fibonacci en la posicion 7 es: " << a;
	
	cout<<endl;
	
	int b{Fibonacci<15>::value};
	cout<<"\nEl numero fibonacci en la posicion 15 es: " << b;
	
	return 0;
}

