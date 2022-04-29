#include <iostream>
using namespace std;
void CalcularEdad( int afecha , int mfecha, int dfech, int aNac, int mNac, int dNac){
	int respFech , respMes;
	if ( dfech < dNac ){
		dfech = dfech + 30;
		mfecha = mfecha - 1;
		respFech = dfech - dNac;
	}
	else
		respFech = dfech - dNac;
	if( mfecha < mNac ){
		mfecha = mfecha + 12;
		afecha = afecha - 1 ;
		respMes = mfecha - mNac;
	}
	else{
		respMes = mfecha - mNac;
	}
	
	cout << "\nTIENE LA EDAD DE: "<<endl;
	cout << " EDAD: " <<afecha - aNac << endl;
	cout << " MESES: " << respMes << endl;
	cout << " DIAS: " << respFech << endl;
}
	
int main(int argc, char *argv[]) {
	
	int afecha , mfecha, dfech,aNac, mNac, dNac;
	
	cout << "Ingrese Año Actual: "; cin >> afecha;
	cout << "Ingrese Mes Actual: "; cin >> mfecha;
	cout << "Ingrese Fecha Actual: "; cin >> dfech;
	cout << "Ingrese Año Nacimiento: "; cin >> aNac;
	cout << "Ingrese Mes de Nacimiento: "; cin >> mNac;
	cout << "Ingrese Fecha de Nacimiento: "; cin >> dNac;
	
	CalcularEdad(afecha ,mfecha, dfech, aNac, mNac, dNac);
	
	return 0;
}
	
	
	
