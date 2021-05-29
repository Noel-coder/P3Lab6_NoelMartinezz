#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include "FileSystemNode.h"
#include "CPP.h"
#include "PPT.h"
#include "JPG.h"
#include <vector>
class Directorio : public FileSystemNode
{
	public:
		Directorio(string,string,FileSystemNode*);
		~Directorio();
		Directorio();
		string toString();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void BuscarPorNombre(string);
	protected:
		vector <FileSystemNode*> hijos;
};

#endif