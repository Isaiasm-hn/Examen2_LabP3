#include "Logia.h"

Logia::Logia(string pNombre,string pElemento):EvilFruit(pNombre){
	this->elemento=pElemento;
}

void Logia::setElemento(string c){
	this->elemento=c;
}

string Logia::getElemento(){
	return elemento;
}

Logia::~Logia(){

}


