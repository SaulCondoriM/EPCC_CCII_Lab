#include <iostream>
#include <vector>
using namespace std;

class Arreglo{
private:
	
	vector <int> A;
	
public:
	
	Arreglo();
	~Arreglo();
	
	bool Comprobar();
	void Agregar(int);
	void Eliminar(int);
	void Mostrar();
	
	
	
};

Arreglo::Arreglo(){}

Arreglo::~Arreglo(){}

bool Arreglo::Comprobar(){
	if(A.size() < 5){
		return true;
	}
	return false;
}

void Arreglo::Agregar(int a){
	if (Comprobar())
		A.push_back(a);
	else
		cout<<"\nNo hay espacio en el arreglo";
}

void Arreglo::Mostrar(){
	
	for (auto i = A.begin(); i != A.end(); i++){
		cout<<*i<<" ";	
	}
}

void Arreglo::Eliminar(int a){
	
	bool comp = false;
	
	if(A.size() == 0){
		cout<<"\nNo hay elementos";
	}
	else{
		for(auto i = A.begin(); i != A.end(); i++){
			
			if ( *i == a){
				
				A.erase(i);
				comp = true;
			}                             
		}
		if (comp == false){
			cout<<"\nElemento no encontrado";  
		}
	}
	
}



int main(int argc, char *argv[]) {
	
	
	Arreglo M;
	
	M.Agregar(5);
	M.Agregar(4);
	M.Agregar(12);
	M.Agregar(20);
	M.Agregar(41);
	
	M.Mostrar();
	
	cout<<endl;
	M.Eliminar(12);
	
	cout<<endl;
	M.Mostrar();
	
	return 0;
}

