#ifndef PPT_H
#define PPT_H

#include "Archivo.h"

class PPT : public Archivo
{
	public:
		PPT(string,int,int,bool);
		~PPT();
		PPT();
		string toString();
	private:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimaciones;
};

#endif