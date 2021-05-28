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
	return NULL;
}
