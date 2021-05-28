#include "Directorio.h"

Directorio::Directorio()
{
}

Directorio::~Directorio()
{
}

Directorio::Directorio(string _nombre, string _autor, FileSystemNode* _padre):FileSystemNode(_nombre,_autor,_padre){
	this->nombre = _nombre;
	this->autor = _autor;
	this->padre = _padre;
}

string Directorio::toString(){
	return NULL;
}

void Directorio::imprimirRecursivo(int profundidad){
	
}

void Directorio::agregarArchivo(FileSystemNode* archivo){
	hijos.push_back(archivo);
}

void Directorio::agregarDirectorio(FileSystemNode* archivo){
	
}

void Directorio::BuscarPorNombre(string s){
	
}

