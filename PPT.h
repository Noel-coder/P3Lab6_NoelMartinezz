#ifndef PPT_H
#define PPT_H
#include "Archivo.h"
#include <string>
using namespace std;

class PPT : public Archivo
{
	public:
		PPT(string,int,int,bool,string,string,FileSystemNode*);
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