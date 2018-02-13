#ifndef MICLASE_H
#define MICLASE_H
#include <string>
	
using namespace std;
class MiClase{ 
	//atributos o metodos privados
	private:
		int codigo;
		string nombre;
	//atributo o metodos publicos
	public:
		//prototipo de metodos
		//constructor sobrecargado
		MiClase(string, int);
		//constructor por defecto
		MiClase();
		//mutadores
		int getCodigo();
		void setCodigo(int);
		string getNombre();
		void setNombre(string);
		//destructor
		//es publico, mismo nombre de la clase, no lleva parametros, solo
		//puede haber uno
		~MiClase();
};

#endif
//Directivas de preprocesador:w

