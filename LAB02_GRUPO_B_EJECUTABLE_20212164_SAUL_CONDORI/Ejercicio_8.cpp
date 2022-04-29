#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	
	cout<<"Que tabla desea ver? "; cin>>num;
	
	for(int i=0; i<11;i++){
		cout<<i<<" X "<<num<<" = "<<i*num<<endl;
	}
	
	return 0;
}

