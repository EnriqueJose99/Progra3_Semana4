#include "MiClase.h"
#include "Alumno.h"
#include <iostream>

using namespace std;
//metodo prueba de clases

void runDynamicCast();

void runClase();

void runC();

void runAlumno();


int main(){
	//runClase();
	//runC();
	runAlumno();
	return 0;
}
void runDynamicCast(){
	MiClase* miClase = new Alumno();
	Alumno* alumno = NULL;
}

void runAlumno(){
	Alumno* alv = new Alumno("Enrique", 11641068, "Sistemas");
	cout<<"El nombre del Alumno es: "<< alv-> getNombre()<<endl;
	cout<<"La cuenta del Alumno es: "<< alv-> getCodigo()<<endl;
	cout<<"La carrera del Alumno es: "<<alv->getCarrera()<<endl;

	delete alv;

}
void runC(){
	MiClase* var = new MiClase("Enrique Galeano", 11641068);
	cout<<"El nombre es: " << var->getNombre()<<endl;
	cout<<"La cuenta es: "<< var->getCodigo()<<endl;
	delete var;
}

void runClase(){
	MiClase var("Enrique", 1234567890);
	cout<<"El nombre es: "<<var.getNombre()<<endl;
	cout<<"La cuenta es: "<<var.getCodigo()<<endl;
}
