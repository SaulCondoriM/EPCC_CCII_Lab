#include <iostream>
using namespace std;

class regresionLineal{
public:
	void operator()(int n){
		
		float x[20], y[20];
		
		float sumX = 0, sumX2=0, sumY=0, sumXY=0, a, b;
		
		for(int i=1; i <= n; i++){
			cout<<"\nIngrese x["<<i<<"] = "; cin >> x[i];
			cout<<"\nIngrese y["<<i<<"] = "; cin >> y[i];
		}
		
		//Calculamos las sumas requeridas
		
		for(int i=1; i <= n; i++){
			sumX = sumX + x[i];
			sumX2 = sumX2 + x[i]*x[i];
			sumY = sumY + y[i];
			sumXY = sumXY + x[i]*y[i];
		}
		
		//Calculamos a y b
		
		b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
		a = (sumY - b*sumX)/n;
		
		cout<<"\nEl valor de a es : "<<a<<endl;
		cout<<"\nEl valor de b es : "<<b;
	}
};

int main(int argc, char *argv[]) {
	
	int n;
	
	cout<<"\nCuantos valores tanto en x como en y desea ingresar? ";cin>> n;
	
	regresionLineal Obj;
	
	Obj(n);
	
	return 0;
}

