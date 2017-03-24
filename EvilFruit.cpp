#include "EvilFruit.h"


EvilFruit::EvilFruit(string pNombre){
	this->nombre=pNombre;
}
void EvilFruit::setNombre(string pNombre){
	this->nombre=pNombre;
}
string EvilFruit::getNombre(){
	return nombre;
}
EvilFruit::~EvilFruit(){

}
