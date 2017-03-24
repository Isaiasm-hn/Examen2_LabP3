#include "Seres.h"


#ifndef MARINA_H
#define MARINA_H
class Marina:public Seres{
protected:
	string rango;
	string fecha;
public:
	void setRango(string);
	string getRango();

	string getFecha();

	Marina(string,int,string, EvilFruit*,string,string);
	~Marina();
	
};
#endif