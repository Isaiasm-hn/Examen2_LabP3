#include "EvilFruit"

#ifndef LOGIA_H
#define LOGIA_H

class Logia{
protected:
	string elemento;	
public:

	void setElemento(string);
	string getElemento();

	Logia(string,string);
	
	~Logia();
	
};