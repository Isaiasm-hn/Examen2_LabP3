#include <iostream>
#include <string>

using namespace std;

#ifndef SERES_H
#define SERES_H
class Seres{
protected:
	
	string raza;
	int edad;
	string nombre;
	EvilFruit* fruta;
	bool armadura=false;
	bool observacion=false;
	bool rey=false;
	bool fruit=false;

public:
	Seres(string,int,string, EvilFruit*,bool ,bool ,bool,bool);
	~Seres();
	virtual void write(ofstream&);
	

	




	
};
#endif