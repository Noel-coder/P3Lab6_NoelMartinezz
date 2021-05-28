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
	return NULL;
}