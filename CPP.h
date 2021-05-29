#ifndef CPP_H
#define CPP_H
#include "Archivo.h"
#include <string>
using namespace std;

class CPP : public Archivo
{
	public:
		CPP(int,int,string,string,FileSystemNode*);
		~CPP();
		CPP();
		string toString();
		int getlineasCodigo();
		void setlineasCodigo(int);
		int getnumErrores();
		void setnumErrores(int);
	private:
		int lineasCodigo;
		int numErrores;
};

#endif