#include "Seres.h"

#ifndef PIRATAS_H
#define PIRATAS_H

class Piratas:public seres{
protected:
	
	string oceano;
	string tripulacion;
	string funcion;

public:
	Piratas(string,int,string, EvilFruit*,bool ,bool ,bool,bool,string,string,string,string);
	~Piratas();
	write(ofstream&);
};
#endif