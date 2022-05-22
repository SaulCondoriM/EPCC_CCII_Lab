#ifndef COLOR_H
#define COLOR_H

#include<iostream>
using namespace std;

class Color{
protected:
	
	int red;
	int green;
	int blue;
	
public:
	Color(int, int, int);
	~Color(){}
};

Color::Color(int _red, int _green, int _blue){
	red = _red;
	green = _green;
	blue = _blue;
}

#endif
