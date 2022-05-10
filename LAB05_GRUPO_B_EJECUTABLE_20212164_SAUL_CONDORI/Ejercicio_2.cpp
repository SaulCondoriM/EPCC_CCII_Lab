#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	for(int i=0; i<100; i++){
		
		
		float P_Punto = 0;
		
		float* A1 = NULL;
		float* A2 = NULL;
		
		A1 = new float[2];
		A2 = new float[2];
		
		A1[0] = 1 + rand() % 100;
		A1[1] = 1 + rand() % 100;
		
		A2[0] = 1 + rand() % 100;
		A2[1] = 1 + rand() % 100;
		
		P_Punto = A1[0]*A2[0] + A1[1]*A2[1];
		
		delete[] A1;
		delete[] A2;
		A1 = NULL;
		A2 = NULL;
		
		
		cout<<"\nEl producto punto es: "<<P_Punto;
		
	}
	


	return 0;
}

