#include <iostream>
#include <memory>
using namespace std;

class C1{
private:
	weak_ptr<double> d; //Puntero debil
public:
	C1(shared_ptr<double> value) : d(value) {}
	virtual ~C1() { cout << "\nC1 destructor\n"; }
	void Print() const {
		//Necesitamos transformarlo a un shared_ptr bloqueandolo
		shared_ptr<double> _d = d.lock();
		cout << "Valor " << *_d << endl; 
	}
};

class C2{
private:
	weak_ptr<double> d; //Puntero debil
public:
	C2(shared_ptr<double> value) : d(value) {}
	virtual ~C2() { cout << "\nC2 destructor\n"; }
	void Print() const { 
		//Necesitamos transformarlo a un shared_ptr bloqueandolo
		shared_ptr<double> _d = d.lock();
		cout << "Valor " << *_d << endl; 
	}
	
};

int main(int argc, char *argv[]) {
	
	shared_ptr<double> d = make_shared<double>(9.21);
	
	shared_ptr<C1> c1 = make_shared<C1>(d);
	shared_ptr<C2> c2 = make_shared<C2>(d);
	
	cout<<"\nMostrando C1"<<endl;
	c1->Print();
	
	cout<<"\nMostrando C2"<<endl;
	c2->Print();
	
	*d = 94.88;
	
	cout<<"\nCAMBIO"<<endl;
	
	cout<<"\nMostrando C1"<<endl;
	c1->Print();
	
	cout<<"\nMostrando C2"<<endl;
	c2->Print();
	
	
	
	
	
	return 0;
	
}

