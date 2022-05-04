#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int x, cont, z, i, Primos[100];
	i=0;
	
	for(x=1;x<=100;x++){
		cont=0;
		
		for(z=1;z<=x;z++){
			
			if(x%z==0){
				cont++;
			}
		}
		
		if(cont==2 || z==1 || z==0){
			Primos[i]=x;
			i++;
		}
	}
	
	for(x=i-1;x>=0;x--){
		
		cout<<Primos[x]<<endl;
	}
	
	
	
	return 0;
}

