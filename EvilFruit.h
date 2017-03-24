#include <iostream>
#include <string>
#include <fstream>


using namespace std;

#ifndef EVILFRUIT_H
#define EVILFRUIT_H
class EvilFruit{
protected:
	string nombre;
public:
	void setNombre(string);
	string getNombre();
	
	EvilFruit(string);
	~EvilFruit();
};
#endif