#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i=1;
	cout<<"Los multiplos de 5 entre 1 y 100 son: ";
	
	while(i<100){
		if(i%5==0){
			cout<<i<<" ";
		}
		i++;
	}
	
	
	return 0;
}

