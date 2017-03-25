#include "Zoan.h"

Zoan::Zoan(string pNombre,string pTipo ):EvilFruit(pNombre){
	this->tipo=pTipo;
}
Zoan::~Zoan(){

}
void Zoan::escribir(ofstream& file){
	static_cast<EvilFruit*>(this)->escribir(file);
	file<<"Zoan"<<endl;
	file<<"Tipo: "<<tipo<<endl;
}
