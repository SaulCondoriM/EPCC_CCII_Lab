#include <iostream>
using namespace std;

class Rectangulo{
private:
	float h;
	float b;
public:
	Rectangulo(float, float);
	~Rectangulo();
	void Area();
	void Perimetro();
};

Rectangulo::Rectangulo(float _h, float _b){
	h = _h;
	b = _b;
}
Rectangulo::~Rectangulo(){}

void Rectangulo::Area(){
	cout<<"\nEl area del rectangulo es: "<<b*h;
}

void Rectangulo::Perimetro(){
	cout<<"\nEl Perimetro del rectangulo es: "<<2*(b+h);
}

int main(int argc, char *argv[]) {
	
	
	Rectangulo r1 = Rectangulo(8,4);
	r1.Area();
	r1.Perimetro();
	
	return 0;
}

