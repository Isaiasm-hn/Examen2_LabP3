#include "Seres.h"

#ifndef PIRATAS_H
#define PIRATAS_H
class Piratas:public seres{
protected:
	string oceano;
	string tripulacion;
	string funcion;
public:
	void setOceano(string)
	string getOceano();

	void setTripulacion(string);
	string getTripulacion();

	void setFuncion(string);
	string getFuncion();

	Piratas(string,int,string, EvilFruit*,string,string);
	~Piratas();
	
};