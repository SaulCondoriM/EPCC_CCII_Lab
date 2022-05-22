#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H

#include <iostream>
using namespace std;

class ClaseMultimedia{
protected:
	string tipo;
	int vol;
	
	
public:
	
	ClaseMultimedia(){}
	~ClaseMultimedia(){}
	
	void Sonar();
	
	void set_tipo(string);
	void set_vol(int);
	
	
};

void ClaseMultimedia::Sonar(){
	cout<<"\nTOC TOC";
}

void ClaseMultimedia::set_tipo(string _tipo){
	
	tipo = _tipo;
	
}


void ClaseMultimedia::set_vol(int _vol){
	vol = _vol;
}
#endif
