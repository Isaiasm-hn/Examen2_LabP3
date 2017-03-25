#include "Logia.h"

Logia::Logia(string pNombre,string pElemento):EvilFruit(pNombre){
	this->elemento=pElemento;

}

Logia::~Logia(){

}

void Logia::escribir(ofstream& file){
	file<<"Fruta del Diablo"<<endl;
	static_cast<EvilFruit*>(this)->escribir(file);
	file<<"Elemento: "<<elemento<<endl;
}


