#include <iostream>
#include <memory>
using namespace std;

class C1{
private:
	shared_ptr<double> d;
public:
	C1(shared_ptr<double> value) : d(value) {}
	virtual ~C1() { cout << "\nC1 destructor\n"; }
	void Print() const { cout << "Valor " << *d << endl; }
};

class C2{
private:
	shared_ptr<double> d;
public:
	C2(shared_ptr<double> value) : d(value) {}
	virtual ~C2() { cout << "\nC2 destructor\n"; }
	void Print() const { cout << "Valor " << *d << endl; }
	
};

int main(int argc, char *argv[]) {
	
	shared_ptr<double> d = make_shared<double>(24.18);
	
	C1* c1 = new C1(d);
	C2* c2 = new C2(d);
	
	cout<<"\nMostrando C1"<<endl;
	c1->Print();
	
	cout<<"\nMostrando C2"<<endl;
	c2->Print();
	
	delete c1;
	delete c2;
	
	return 0;
	
}

