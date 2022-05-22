#include<iostream>
#include "Color.h"
#include "Material.h"
#include "Objetos.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	Objetos a(180,180,180,"madera","mesa");
	
	a.describirObjetos();
	
	return 0;
}

