#include "JPG.h"

JPG::JPG() {
}

JPG::~JPG() {
}

JPG::JPG(bool _conFlash, string _resolucion, double _largo, double _ancho, string _nombre, string _autor, FileSystemNode* _padre):Archivo(_nombre, _autor, _padre) {
	this->conFlash = _conFlash;
	this->resolucion = _resolucion;
	this->largo = _largo;
	this->ancho = _ancho;
}

string JPG::toString() {
	return nombre;
}

bool JPG::getconFlash(){
	return this->conFlash;
}

void JPG::setconFlash(bool _conFlash){
	this->conFlash = _conFlash;
}

string JPG::getResolucion(){
	return this->resolucion;
}

void JPG::setResolucion(string _resolucion){
	this->resolucion = _resolucion;
}

double JPG::getLargo(){
	return this->largo;
}

void JPG::setLargo(double _largo){
	this->largo = _largo;
}

double JPG::getAncho(){
	return this->ancho;
}

void JPG::setAncho(double _ancho){
	this->ancho = _ancho;
}