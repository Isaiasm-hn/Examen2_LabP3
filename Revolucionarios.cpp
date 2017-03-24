#include "Seres.h"

Revolucionarios::Revolucionarios(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit,string poceano,string ptripulacion,string pfuncion):Seres(pRaza,pEdad,pNombre,pFruta,pArmadura,pObservacion,pRey,pFruit){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec;
	string hora=hour.str();
	
}
Revolucionarios::
Revolucionarios::

