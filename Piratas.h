#include "Seres.h"

#ifndef PIRATAS_H
#define PIRATAS_H

class Piratas:public Seres{
protected:
	
	string oceano;
	string tripulacion;
	string funcion;

public:
	Piratas(string,int,string, EvilFruit*,bool ,bool ,bool,bool,string,string,string);
	~Piratas();
	void escribir(ofstream&);
};
#endif