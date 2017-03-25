#include "EvilFruit.h"


EvilFruit::EvilFruit(string pNombre){
	this->nombre=pNombre;
}
void EvilFruit::escribir(ofstream& file){
	file<<"Nombre: "<<nombre<<endl;
}
EvilFruit::~EvilFruit(){

}
string EvilFruit::getNombre(){
	return nombre;
}
