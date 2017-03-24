#include "Marina.h"

Marina::Marina(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,string pRango):Seres(pRaza,pEdad,pNombre,pFruta,pArmadura,pObservacion,pRey){
	this->rango=pRango;
	ofstream file;
	string ruta;
	stringstream ss;
	ss<<pNombre<<".log";
	ruta=ss.str();
	file.open(ruta);
	write(&file);
	file.close();
}

void Marina::write(ofstream& file){
	static_cast<Seres*>(this)->write(file);
	file<<"Rango: "<<rango<<endl;
	
}

