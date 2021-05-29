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
	return titulo;
}

string PPT::getTitulo(){
	return this->titulo;
}

void PPT::setTitulo(string _titulo){
	this->titulo = _titulo;
}

int PPT::getnumSlides(){
	return this->numSlides;
}

void PPT::setnumSlides(int _numSlides){
	this->numSlides = _numSlides;
}

int PPT::getnumPlantilla(){
	return this->numPlantilla;
}

void PPT::setnumPlantilla(int _numplantilla){
	this->numPlantilla = _numplantilla;
}

bool PPT::getTieneAnimaciones(){
	return this->tieneAnimaciones;
}

void PPT::setTieneAnimaciones(bool _tieneAnimaciones){
	this->tieneAnimaciones =_tieneAnimaciones;
}