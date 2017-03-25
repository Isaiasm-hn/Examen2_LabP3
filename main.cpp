#include "EvilFruit.h"
#include "Logia.h"
#include "Marina.h"
#include "Paramecia.h"
#include "Revolucionarios.h"
#include "Seres.h"
#include "Zoan.h"
#include "Piratas.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int MenuPrincipal();
int MenuSeres();
int MenuFrutas();
string MenuRazas();
EvilFruit* getFrutas(vector<EvilFruit*>);
string MenuRango();
string MenuOceano();

int main(){
	vector<Seres*> ser;
	vector<EvilFruit*> frutos;
	do{	
		cout<<endl;
		int menu=MenuPrincipal();
		switch(menu){
			case 1:{
				string raza,nombre;
				char x;
				bool armadura=false,observacion=false,rey=false,fruta=false;
				int edad;
				EvilFruit* fr;

				cout<<"Ingrese Nombre: ";
				cin.ignore();
				getline(cin,nombre);
				cout<<"Haki Armadura [S/N]";
				cin>>x;
				if(x=='S' || x=='s'){
					armadura=true;
				}
				cout<<"Haki de Observacion [S/N]";
				cin>>x;
				if(x=='S' || x=='s'){
					observacion=true;
				}
				cout<<"Haki del Rey [S/N]";
				cin>>x;
				if(x=='S' || x=='s'){
					rey=true;
				}
				cout<<"Tiene Fruta [S/N]";
				cin>>x;
				if(x=='S' || x=='s'){
					fruta=true;
					fr=getFrutas(frutos);
				}
				cout<<"Ingrese edad: ";
				cin>>edad;
				raza=MenuRazas();
				cout<<endl;
				int  menu_seres=MenuSeres();
				switch(menu_seres){
					case 1:{

						Seres* temp=new Revolucionarios(raza,edad,nombre,fr,armadura,observacion,rey,fruta);
						ser.push_back(temp);
						cout<<"Se agrego un Pija de Revolucionario"<<endl;

						break;
					}
					case 2:{
						string rango=MenuRango();
						Seres* temp=new Marina(raza,edad,nombre,fr,armadura,observacion,rey,fruta,rango);
						ser.push_back(temp);
						break;
					}
					case 3:{
						string oceano=MenuOceano();
						string tripulacion;
						string funcion;
						cout<<"Ingrese Tripulacion: ";
						cin.ignore();
						getline(cin,tripulacion);
						cout<<"Ingrese Funcion: ";
						cin.ignore();
						getline(cin,tripulacion);
						Seres* temp=new Piratas(raza,edad,nombre,fr,armadura,observacion,rey,fruta,oceano,tripulacion,funcion);
						ser.push_back(temp);
						break;
					}
				}
				break;
			}
			case 2:{
				string nombre;
				cout<<"Ingrese Nombre ";
				cin.ignore();
				getline(cin,nombre);
				cout<<endl;
				switch(MenuFrutas()){
					case 1:{
						string tipo;
						cout<<"Ingrese Tipo ";
						cin.ignore();
						getline(cin,tipo);
						EvilFruit* fr_1=new Zoan(nombre,tipo);
						frutos.push_back(fr_1);
						break;
					}
					case 2:{
						string elemento;
						cout<<"Ingrese Elemento ";
						cin.ignore();
						getline(cin,elemento);
						EvilFruit* fr_1=new Logia(nombre,elemento);
						frutos.push_back(fr_1);
						break;
					}
					case 3:{
						string descripcion;
						cout<<"Ingrese Descripcion: ";
						cin.ignore();
						getline(cin,descripcion);
						EvilFruit* fr_1=new Paramecia(nombre,descripcion);
						frutos.push_back(fr_1);
						break;
					}

				}
				break;
			}

		}
	}while(true);



	return 0;
}
EvilFruit* getFrutas(vector<EvilFruit*> fr){
	int opc;
	cout<<endl;
	for (int i = 0; i < fr.size(); ++i){
		cout<<(i+1)<<")- "<<static_cast<EvilFruit*>(fr.at(i))->getNombre()<<endl;	
	}
	cout<<"Ingrese posicion: ";
	cin>>opc;
	return fr.at(opc);

}
int MenuPrincipal(){
	int opc;
	do{
		cout<<
			  "1) Agregar Seres\n"<<
			  "2) Agregar Frutal del Diablo\n"<<
			  "Ingrese Opcion: ";
		cin>>opc;
		if(opc<1 || opc>2){
			cout<<"Opcion no encontrada!\n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>2);
}

int MenuSeres(){
	int opc;
	cout<<endl;
	do{
		cout<<"----------------------------\n"<<
			  "1) Revolucionarios\n"<<
			  "2) Pirata\n"<<
			  "3) Marino\n"<<
			  "Ingrese Tipo: ";
		cin>>opc;
		if(opc<1 || opc>3){
			cout<<"Opcion no encontrada!\n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>3);
}
int MenuFrutas(){
	int opc;
	do{
		cout<<"----------------------------\n"<<
			  "1) Zoan\n"<<
			  "2) Logia\n"<<
			  "3) Paramecia\n"<<
			  "Ingrese Tipo: ";
			   cin>>opc;
		if(opc<1 || opc>3){
			cout<<"Opcion no encontrada!\n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>3);
}
string MenuRazas(){
	int opc;
	do{
		cout<<"1) gyojin\n2) kyojin\n3) ningyo\n4) humano\n5) mink\n6) skypieans\n"<<
		   "Ingrese numero de raza: ";
		cin>>opc;
		if(opc<1 || opc>6){
			cout<<"Opcion no encontrada!\n";
		}else{
			switch(opc){
				 case 1:{
				 	return "gyojin";
					break;
				}
				case 2:{
					return "kyojin";
					break;
				}
				case 3:{
					return "ningyo";
					break;
				}case 4:{
					return "humano";
					break;
				}case 5:{
					return "mink";
					break;
				}case 6:{
					return "skypieans";
					break;
				}
			}
			
		}
	}while(opc<1 || opc>6);
}
string MenuRango(){
	int opc;
	cout<<endl;
	do{
		cout<<"1) cadete\n2) teniente\n3) vice-almirante\n4) almirante\n5) almirante de flota\n"<<
		   "Ingrese numero Rango: ";
		cin>>opc;
		if(opc<1 || opc>5){
			cout<<"Opcion no encontrada!\n";
		}else{
			switch(opc){
				 case 1:{
				 	return "cadete";
					break;
				}
				case 2:{
					return "teniente";
					break;
				}
				case 3:{
					return "vice-almirante";
					break;
				}case 4:{
					return "almirante";
					break;
				}case 5:{
					return "almirante de flota";
					break;
				}
			}
			
		}
	}while(opc<1 || opc>5);
}


string MenuOceano(){
	int opc;
	cout<<endl;
	do{
		cout<<"1) east\n2) west\n3) south\n4) north blue\n5) grand line\n6) new world\n"<<
		   "Ingrese numero Rango: ";
		cin>>opc;
		if(opc<1 || opc>6){
			cout<<"Opcion no encontrada!\n";
		}else{
			switch(opc){
				 case 1:{
				 	return "east";
					break;
				}
				case 2:{
					return "west";
					break;
				}
				case 3:{
					return "south";
					break;
				}case 4:{
					return "north blue";
					break;
				}case 5:{
					return "grand line";
					break;
				}
				case 6:{
					return "new world";
					break;
				}
			}	
		}
	}while(opc<1 || opc>6);
}
