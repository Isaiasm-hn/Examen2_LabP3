#include "EvilFruit.h"

#ifndef LOGIA_H
#define LOGIA_H
class Logia:public EvilFruit{
protected:
	string elemento;	
public:
	Logia(){
		
	}
	Logia(string,string);
	~Logia();
	void escribir(ofstream& file);
	
};
#endif