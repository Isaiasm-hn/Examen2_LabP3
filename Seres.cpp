#include "Seres.h"

Seres::Seres(string pRaza,int pEdad, string pNombre, EvilFruit* pFruta,bool pArmadura, bool pObservacion,bool pRey,bool pFruit){
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
	if(fruit){
		delete fruit;
	}
}
void Seres::write(ofstream& file){
	file<<"Nombre: "<<nombre<<endl;
	file<<"Raza: "<<raza<<endl;
	file<<"Edad: "<<edad<<endl;
	if(fruit){
		fruta->write(file);
	}
	file<<"Hakki de Observacion: "<<observacion<<endl;
	file<<"Hakki de armadura: "<<armadura<<endl;
	file<<"Hakki del rey: "<<rey<<endl
}