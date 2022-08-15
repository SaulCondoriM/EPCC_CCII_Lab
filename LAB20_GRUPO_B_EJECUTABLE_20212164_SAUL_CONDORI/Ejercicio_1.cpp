#include <iostream>
#include <memory>
using namespace std;

class Point{
private:
	double x{}, y{};
public:
	//Constructor
	Point(double x, double y) : x(x), y(y) {};
	//Creamos una funcion Imprimir
	void Print(){
		cout<<"\n(" << x << ", " << y << ")";
	}
	//Funcion para setear valor a X
	void X(double _x){
		x = _x;
	}
	//Funcion para setear valor a Y
	void Y(double _y){
		y = _y;
	}
};

int main(int argc, char *argv[]) {
	
	double* d = new double(1.0); // Puntero de tipo double
	Point* pt = new Point(1.0, 2.0); //Creamos un objeto de tipo Point
	
	*d = 2.0; //Asignamos valor al puntero
	(*pt).X(3.0); //Asignamos valor a "X"
	(*pt).Y(3.0); //Asignamos valor a "y"
	
	pt->X(3.0); //Con el operator "->" Podemos setear los valores en "X"
	pt->Y(3.0); //Con el operator "->" Podemos setear los valores en "Y"
	pt->Print(); //Utilizamos la funcion Imprimir
	
	delete d; //Borramos los punteros
	delete pt;
	
	return 0;

}

