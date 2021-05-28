#include "Archivo.h"

Archivo::Archivo()
{
}

Archivo::~Archivo()
{
}

Archivo::Archivo(string _nombre, string _autor, FileSystemNode* _padre){
	this->nombre = _nombre;
	this->autor = _autor;
	this->padre = _padre;
}