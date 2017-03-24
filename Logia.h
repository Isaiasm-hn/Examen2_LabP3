#include "EvilFruit.h"

#ifndef LOGIA_H
#define LOGIA_H
class Logia:public EvilFruit{
protected:
	string elemento;	
public:

	void setElemento(string);
	string getElemento();

	Logia(string,string);
	
	~Logia();
	
};