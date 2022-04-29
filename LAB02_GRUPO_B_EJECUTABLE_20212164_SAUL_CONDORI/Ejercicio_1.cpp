#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int sum=0;
	
	for(int i=0;i<100; i++ ){
		if(i%2==0){
			sum += i;
		}
	}
	
	cout<<"La suma es: "<<sum;
	return 0;
}

