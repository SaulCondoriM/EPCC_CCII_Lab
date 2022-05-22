#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;

class Ave{
protected:
	
	string color;
	
public:
	
	Ave(){}
	~Ave(){}
	
	void set_color(string);
	
};

void Ave::set_color(string _color){
	
	color = _color;
	
}

#endif
