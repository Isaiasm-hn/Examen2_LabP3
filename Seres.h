#include <iostream>
#include <string>

#ifndef SERES_H
#define SERES_H
using namespace std;

class Seres{
protected:
	string raza;
	int edad;
	string nombre;
	EvilFruit* fruta;
public:
	Seres(string,int,string, EvilFruit*)
	void setEdad(int);
	int getEdad();

	void setEvilFruit(EvilFruit*);
	EvilFruit* getEvilFruit();
	
	~Seres();
	
	void setRaza(string);
	string getRaza();
	
	void setNombre(string);
	string getNombre();

	void setEdad(int);
	int getEdad();

	void setFruit(EvilFruit*);
	EvilFruit* getFruit();

	~Seres();
	
};
#endif