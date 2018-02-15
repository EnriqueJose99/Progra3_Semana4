#include "MiClase.h"
#include "Alumno.h"
#include <iostream>
#include <typeinfo>



using namespace std;
//metodo prueba de clases

void runDynamicCast();

void runClase();

void runC();

void runAlumno();


int main(){
	
	//runClase();
	
	//runC();
	
	//runAlumno();

	runDynamicCast();
	
	

	return 0;

}
void runDynamicCast(){
	MiClase* miClase = new Alumno();
	Alumno* alumno = NULL;
	MiClase miClase2("Juan", 11641068);
	cout<<"1 El tipo de dato es: "<<typeid(miClase).name()<<endl;
	cout<<"2 EL tipo de dato es: "<<typeid(miClase2).name()<<endl;
	cout<<"3 El tipo de dato es: "<<typeid(alumno).name()<<endl;
	if(typeid(miClase) == typeid(MiClase*)){
		cout<<"Es un apuntador"<<endl;
	}
	//Dynamic Cast
	alumno = dynamic_cast<Alumno*>(miClase);
	if(alumno!= NULL){
		cout<<"La carrera es " <<alumno->getCarrera()<<endl;
	}
	
	miClase->setNombre("Enrique Galeano");

	cout<<"El nombre es: " <<alumno->getNombre()<<endl;
	delete miClase;
	

}

void runAlumno(){
	Alumno* a = new Alumno("Enrique", 11641068, "Sistemas");
	cout<<"El nombre del Alumno es: "<< a-> getNombre()<<endl;
	cout<<"La cuenta del Alumno es: "<< a-> getCodigo()<<endl;
	cout<<"La carrera del Alumno es: "<<a->getCarrera()<<endl;

	delete a;

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
