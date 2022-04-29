#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int c=0;
	int cont_pri=0;
	int num_pri=2;

	cout<<"Los 50 primeros numeros primos son: ";
	while(50>cont_pri){
		c=0;
		for (int i=1;i<=num_pri;i++){
			if(num_pri%i==0){
				c++;
			}
		}
		if(c==2){
			cout<<num_pri<<" ";
			cont_pri++;
		}
		num_pri++;
	}
	return 0;
}

