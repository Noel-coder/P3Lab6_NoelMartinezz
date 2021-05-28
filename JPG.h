#ifndef JPG_H
#define JPG_H
#include "Archivo.h"
#include <string>
#include <iostream>
using namespace std;

class JPG : public Archivo
{
	public:
		JPG(bool,string,double,double,string,string,FileSystemNode*);
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