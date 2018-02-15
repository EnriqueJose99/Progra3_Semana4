#include "MiClase.h"
#include <string>

#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno : public MiClase{
	private:
		string carrera;
	public:
		Alumno();
		Alumno(string, int, string);

		//getters and setters
		void setCarrera(string);
		string getCarrera();
};

#endif
