#include <iostream>
#include "Alumno.h"
using namespace std;

Alumno :: Alumno(){
	carrera = "I-1";
}

Alumno:: Alumno(string pNombre, int pCodigo, string carrera)
	: MiClase(pNombre, pCodigo){
		carrera= carrera;
	}
void Alumno::setCarrera(string pCarrera){
	this -> carrera = carrera;
}
string Alumno::getCarrera(){
	return carrera;
}
