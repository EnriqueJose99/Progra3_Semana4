#include "MiClase.h"
#include <iostream>

using namespace std;
//metodo prueba de clases
void runClase();

int main(){
	runClase();
	
	return 0;
}

void runClase(){
	MiClase var("Enrique", 1234567890);
	cout<<"El nombre es: "<<var.getNombre()<<endl;
	cout<<"La cuenta es: "<<var.getCodigo()<<endl;
}
