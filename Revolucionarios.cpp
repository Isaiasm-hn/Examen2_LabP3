#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit):Seres(pRaza,pEdad,pNombre,pFruta,pArmadura,pObservacion,pRey,pFruit){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_mday<< "/" << (time->tm_mon+1) << "/" << (time->tm_year+1900);
	this->fecha=hour.str();
	
	ofstream file;
	string ruta ;
	stringstream ss;
	ss<<pNombre<<".log";
    ruta=ss.str();
	file.open(ruta.c_str());
	escribir(file);
	file.close();

}
void Revolucionarios::escribir(ofstream& file){
	Seres::escribir(file);
	file<<"Fecha: "<<fecha<<endl;

}
Revolucionarios::~Revolucionarios(){

}

