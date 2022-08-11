#include <iostream>
#include <vector>
using namespace std;

class Encontrar{

public:
	
	vector<int> operator()(const vector<int>& Vector1, int indiceInicio, int indiceFinal, int num){
		
		vector<int> VectorPos = {};
		
		for(int i = indiceInicio; i < indiceFinal; i++){
			
			if(Vector1[i] == num ){
				VectorPos.push_back(i);
			}
			
		}
		
		return VectorPos;
	}
};

int main(int argc, char *argv[]) {
	
	vector<int> Vector1 = {15,14,48,74,14,14,98};
	vector<int> VectorPosiciones = {};
	
	Encontrar Obj;
	
	cout<<"\nMOSTRANDO LA LISTA: ";
	
	for(int i=0; i < Vector1.size(); i++){
		cout<<Vector1[i]<<" ";
	}
	
	cout<<"\nMOSTRANDO LAS POSICIONES EN DONDE ESTA EL NUMERO 14: ";
	
	VectorPosiciones = Obj(Vector1,0,8,14);
	
	for(int i=0; i < VectorPosiciones.size(); i++){
		cout<<VectorPosiciones[i]<<" ";
	}
	
	return 0;
}

