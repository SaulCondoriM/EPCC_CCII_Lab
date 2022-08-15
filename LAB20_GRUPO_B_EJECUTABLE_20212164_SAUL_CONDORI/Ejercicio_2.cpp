#include <iostream>
#include <memory>
using namespace std;

class Point{
private:
	double x{}, y{};
public:

	Point(double x, double y) : x(x), y(y) {};

	void Print(){
		cout<<"\n(" << x << ", " << y << ")";
	}

	void X(double _x){
		x = _x;
	}

	void Y(double _y){
		y = _y;
	}
};

int main(int argc, char *argv[]) {
	
	unique_ptr<double> d{ new double(1.0) };
	unique_ptr<Point> pt{ new Point(1.0, 2.0) };
	
	cout<<"\nValor de d : "<<*d<<endl;
	cout<<"\nPunto: "; pt->Print();
	
	*d = 2.0;
	cout<<endl;
	cout<<"\nDespues del cambio"<<endl;
	
	cout<<"\nValor de d: "<<*d<<endl;
	
	(*pt).X(3.0);
	(*pt).Y(3.0);
	
	pt->X(3.0);
	pt->Y(3.0);
	
	cout<<"\nPunto: "; pt->Print();
	
	
	return 0;
	
}

