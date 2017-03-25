#include <iostream>
#include <string>
#include "EvilFruit.h"
#include <ctime>
#include <sstream>
#include <fstream>

using namespace std;

#ifndef SERES_H
#define SERES_H
class Seres{
protected:
	
	string raza;
	int edad;
	string nombre;
	EvilFruit* fruta;
	bool armadura;
	bool observacion;
	bool rey;
	bool fruit;

public:
	
	Seres(string,int,string, EvilFruit*,bool ,bool ,bool,bool);
	~Seres();
	virtual void escribir(ofstream&);
	

	




	
};
#endif