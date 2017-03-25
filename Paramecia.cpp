#include "Paramecia.h"

Paramecia::Paramecia(string pNombre,string pDescripcion):EvilFruit(pDescripcion){
		this->descripcion=pDescripcion;
}

Paramecia::~Paramecia(){

}
void Paramecia::escribir(ofstream& file){
	static_cast<EvilFruit*>(this)->escribir(file);
	file<<"Descripcion: "<<descripcion<<endl;

}

