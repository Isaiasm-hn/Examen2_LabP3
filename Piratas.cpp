#include "Piratas.h"

Piratas::Piratas(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit,string pOceano,string pTripulacion,string pFuncion):Seres(pRaza,pEdad,pNombre,pFruta,pArmadura,pObservacion,pRey,pFruit){
	this->oceano=pOceano;
	this->tripulacion=pTripulacion;
	this->funcion=pFuncion;
	
	ofstream file;
	string ruta ;
	stringstream ss;
	ss<<pNombre<<".log";
    ruta=ss.str();
	file.open(ruta.c_str());
	escribir(file);
	file.close();

}
Piratas::~Piratas(){

}

void Piratas::escribir(ofstream& file){
	Seres::escribir(file);
	file<<"Oceano: "<<oceano<<endl;
	file<<"Tripulacion: "<<tripulacion<<endl;
	file<<"Funcion: "<<funcion<<endl;
}
