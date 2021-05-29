#include "CPP.h"

CPP::CPP() {
}

CPP::~CPP() {
}

CPP::CPP(int _lineasCodigo, int _numErrores, string _nombre, string _autor, FileSystemNode* _padre):Archivo(_nombre, _autor, _padre) {
	this->lineasCodigo = _lineasCodigo;
	this->numErrores = numErrores;
}

string CPP::toString() {
	return nombre;
}

int CPP::getlineasCodigo(){
	return this->lineasCodigo;
}

void CPP::setlineasCodigo(int _lineasCodigo){
	this->lineasCodigo = _lineasCodigo;
}

int CPP::getnumErrores(){
	return this->numErrores;
}

void CPP::setnumErrores(int _numErrores){
	this->numErrores = _numErrores;
}