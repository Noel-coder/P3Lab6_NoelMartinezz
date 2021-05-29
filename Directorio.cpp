#include "Directorio.h"

Directorio::Directorio() {
}

Directorio::~Directorio() {
}

Directorio::Directorio(string _nombre, string _autor, FileSystemNode* _padre):FileSystemNode(_nombre,_autor,_padre) {
	this->nombre = _nombre;
	this->autor = _autor;
	this->padre = _padre;
}

string Directorio::toString() {
	return "Directorio: "+nombre+"Autor: "+autor;
}

void Directorio::imprimirRecursivo(int profundidad) {
	for(int i = 0; i < hijos.size(); i++) {
		for(int j = 0; j < profundidad*6; j++) {
			cout << " ";
		}
		Directorio* actual;
		CPP* actualCPP;
		PPT* actualPPT;
		JPG* actualJPG;
		if (dynamic_cast < Directorio*> (hijos[i])) {
			actual = dynamic_cast < Directorio*> (hijos[i]);
			cout << actual->toString();
			cout<<endl;
			actual->imprimirRecursivo(profundidad + 1);
		} else if (dynamic_cast < CPP*> (hijos[i])) {
			actualCPP = dynamic_cast <CPP*> (hijos[i]);
			cout << actualCPP->toString() <<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Lineas de Codigo: " <<actualCPP->getlineasCodigo()+""<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Numero de Errores: " <<actualCPP->getnumErrores()+""<<endl;
		} else if (dynamic_cast < JPG*> (hijos[i])) {
			actualJPG = dynamic_cast < JPG*> (hijos[i]);
			cout << actualJPG->toString() <<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Resolucion: " <<actualJPG->getResolucion()+""<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Largo: " <<actualJPG->getLargo()<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Ancho: " <<actualJPG->getAncho()<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Flash: " <<actualJPG->getconFlash()<<endl;
		} else if (dynamic_cast < PPT*> (hijos[i])) {
			actualPPT = dynamic_cast < PPT*> (hijos[i]);
			actualPPT->toString();
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Titulo: " <<actualPPT->getTitulo()+""<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Numero de diapositivas: " <<actualPPT->getnumSlides()<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Numero de plantillas: " <<actualPPT->getnumPlantilla()<<endl;
			for (int j = 0; j < profundidad * 6; j++) {
				cout << " ";
			}
			cout << " -Animaciones: " <<actualPPT->getTieneAnimaciones()<<endl;
			for(int j = 0; j < profundidad*6; j++) {
				cout << " ";
			}
		}
	}
}

void Directorio::agregarArchivo(FileSystemNode* archivo) {
	hijos.push_back(archivo);
}

void Directorio::agregarDirectorio(FileSystemNode* archivo) {
	hijos.push_back(archivo);
}

void Directorio::BuscarPorNombre(string buscar) {
	for(int i = 0; i < hijos.size(); i++) {
		FileSystemNode* fs = hijos[i];
		string nombreTemp = fs->getNombre();
		if(nombreTemp.find(buscar) != string::npos) {
			cout<<fs->getNombre()<<" - "<<fs->getAutor()<<endl;
		}
	}
}

