#include <iostream>
#include <string>

#ifndef PARAMECIA_H
#define PARAMECIA_H

class Paramecia:public EvilFruit{
protected:
	string descripcion;
public:
	
	void setDescripcion(string);
	string getDescripcion();

	Paramecia(string, string);
	~Paramecia();
	
};
#endif