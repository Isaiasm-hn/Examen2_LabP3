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
	EvilFruit(){
		
	}
	string getNombre();
	EvilFruit(string);
	~EvilFruit();
	void escribir(ofstream&);
};
#endif