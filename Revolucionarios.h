#include "Seres.h"

#ifndef REVOLUCIONARIOS_H
#define REVOLUCIONARIOS_H
class Revolucionarios:public Seres{
protected:
	string fecha;
public:
	
	Revolucionarios(string,int,string, EvilFruit*,bool ,bool ,bool,bool);
	~Revolucionarios();
	void write(oftream&);
};
#endif