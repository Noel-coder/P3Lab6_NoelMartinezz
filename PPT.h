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
		string getTitulo();
		void setTitulo(string);
		int getnumSlides();
		void setnumSlides(int);
		int getnumPlantilla();
		void setnumPlantilla(int);
		bool getTieneAnimaciones();
		void setTieneAnimaciones(bool);
	private:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimaciones;
};

#endif