#include "Seres.h"

Piratas::Piratas(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit,string poceano,string ptripulacion,string pfuncion):Seres(pRaza,pEdad,pNombre,pFruta,pArmadura,pObservacion,pRey,pFruit){
	this->oceano=poceano;
	this->tripulacion=ptripulacion;
	this->funcion=pfuncion;
	ofstream file;
	string ruta;
	stringstream ss;
	ss<<pNombre<<".log";
	ruta=ss.str();
	file.open(ruta);
	write(&file);
	file.close();

}
Piratas::~Piratas(){

}

void Piratas::write(ofstream& file){
	static_cast<Seres*>(this)->write(file);
	file<<"Oceano: "<<oceano<<endl;
	file<<"Tripulacion: "<<triṕulacion<<endl;
	file<<"Funcion: "<<funcion<<endl;
}
