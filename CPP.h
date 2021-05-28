#ifndef CPP_H
#define CPP_H
#include "Archivo.h"
#include <string>
using namespace std;

class CPP : public Archivo
{
	public:
		CPP(int,int,string);
		~CPP();
		CPP();
	private:
		int lineasCodigo;
		int numErrores;
		string toString;
};

#endif