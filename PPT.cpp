#include "PPT.h"

PPT::PPT()
{
}

PPT::~PPT()
{
}

PPT::PPT(string _titulo, int _numSlides, int _numPlantilla, bool _tieneAnimaciones, string _nombre, string _autor, FileSystemNode* _padre):Archivo(_nombre, _autor, _padre){
	this->titulo= _titulo;
	this->numSlides=_numSlides;
	this->numPlantilla=_numPlantilla;
	this->tieneAnimaciones=_tieneAnimaciones;
}

string PPT::toString(){
	return NULL;
}