#include "Seres.h"

Seres::Seres(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit){
	this->armadura=false;
	this->observacion=false;
	this->fruit=false;
	this->rey=false;
	this->raza=pRaza;
	this->edad=pEdad;
	this->nombre=pNombre;
	this->fruta=pFruta;
	this->armadura=pArmadura;
	this->observacion=pObservacion;
	this->fruit=pFruit;
	this->rey=pRey;
}
Seres::~Seres(){
	
}
void Seres::escribir(ofstream& file){
	file<<"Nombre: "<<nombre<<endl;
	file<<"Raza: "<<raza<<endl;
	file<<"Edad: "<<edad<<endl;
	if(fruit){
		fruta->escribir(file);
	}
	file<<"Hakki de Observacion: "<<observacion<<endl;
	file<<"Hakki de armadura: "<<armadura<<endl;
	file<<"Hakki del rey: "<<rey<<endl;
}