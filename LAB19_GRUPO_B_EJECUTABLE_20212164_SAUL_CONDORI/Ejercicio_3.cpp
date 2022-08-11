#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> rand_int(0, 100);

class Elemento{

public:
	
	int a, b;
	
	void operator()(){
		a = rand_int(gen);
		b = rand_int(gen);
	}
	
};

class condicionSort{
public:
	bool operator()(Elemento obj1, Elemento obj2){
		if (obj1.a < obj2.b){
			return true;
		}
		
		return false;
	}
	
};

int main(int argc, char *argv[]) {
	
	vector<Elemento> *vectorObjetos;
	
	vectorObjetos = new vector<Elemento> (5,Elemento());
	
	cout<<"\nMOSTRAR LA LISTA LISTA INICIAL : ";
	for(int i = 0; i < 20; i++){
		(*vectorObjetos)[i]();
		cout<<"["<<(*vectorObjetos)[i].a<<", "<<(*vectorObjetos)[i].b<<"] ";
	}
	
	cout<<endl;
	cout<<"\nMOSTRANDO LA LISTA ORDENADA: ";
	
	sort(vectorObjetos->begin(), vectorObjetos->end(), condicionSort());
	
	for(int i = 0; i < 20; i++){
		(*vectorObjetos)[i]();
		cout<<"["<<(*vectorObjetos)[i].a<<", "<<(*vectorObjetos)[i].b<<"] ";
	}
	
	return 0;
}

