#ifndef JPG_H
#define JPG_H

#include "Archivo.h"

class JPG : public Archivo
{
	public:
		JPG(bool,string,double,double);
		~JPG();
		JPG();
		string toString();
	private:
		bool conFlash;
		string resolucion; 
		double largo;
		double ancho;
};

#endif