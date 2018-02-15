#include "MiClase.h"
#include <iostream>
#include <string>
using namespace std;

MiClase::MiClase(string pNombre, int pCodigo){
	this->nombre = pNombre;
	this->codigo = pCodigo;  
}

MiClase::MiClase(){
	nombre = "Juan Luis xd";
	codigo = 504;
}

int MiClase::getCodigo(){
	return codigo;
}
void MiClase::setCodigo(int pCodigo){
	codigo = pCodigo;
}

string MiClase::getNombre(){
	return nombre;
}

void MiClase::setNombre(string pNombre){
	nombre = pNombre;
}


/*destructor*/
MiClase::~MiClase(){
	cout<<"La instancia fue eliminada"<<endl;
}
