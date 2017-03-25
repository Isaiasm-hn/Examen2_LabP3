#include "Seres.h"


#ifndef MARINA_H
#define MARINA_H

class Marina:public Seres{
protected:
	string rango;
	string fecha;
public:
	Marina(string,int,string, EvilFruit*,bool ,bool ,bool,bool,string);
	~Marina();
	void escribir(ofstream&);
	
};
#endif