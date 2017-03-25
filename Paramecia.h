#include <iostream>
#include <string>
#include "EvilFruit.h"

#ifndef PARAMECIA_H
#define PARAMECIA_H

class Paramecia:public EvilFruit{
protected:
	string descripcion;
public:


	Paramecia(){
		
	}
	Paramecia(string, string);
	~Paramecia();
	void escribir(ofstream&);
	
};
#endif