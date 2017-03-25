#include <iostream>
#include <string>
#include "EvilFruit.h"

using namespace std;

#ifndef ZOAN_H
#define ZOAN_N

class Zoan: public EvilFruit{
protected:
	string tipo;
public:
	Zoan(){
		
	}
	Zoan(string,string);
	~Zoan();
	void escribir(ofstream&);
	
};
#endif