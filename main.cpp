#include "FileSystem.h"
#include "Directorio.h"
#include <iostream>
using namespace std;
int menu() {
	while(true) {
		cout <<"[=======================]"<<endl
		     <<"  Sistemas de Archivos "<<endl
		     <<"[=======================]"<<endl
		     <<"1. Imprimir FileSystem: "<<endl
		     <<"2. Agregar Directorios: "<<endl
		     <<"3. Agregar Archivos: "<<endl
		     <<"4. Buscar Por Nombre: "<<endl
		     <<"5. Salir: "<<endl
		     <<"Ingrese una opcion: ";
		int valor;
		cin>>valor;
		if(valor > 0 && valor < 6)
			return valor;
	}
}

int subMenu() {
	while(true) {
		cout <<"[=======================]"<<endl
		     << "        Archivos        "<<endl
		     <<"[=======================]"<<endl
		     << "1. CPP: " << endl
		     << "2. JPG: "<< endl
		     << "3. PPT: "<< endl
		     << "Ingrese una opcion: ";
		int valorSub;
		cin>>valorSub;
		if(valorSub > 0 && valorSub < 4)
			return valorSub;
	}
}

int main(int argc, char** argv) {
	FileSystem* archivo = new FileSystem();
	archivo->getRoot()->agregarDirectorio(archivo->getRoot());
	Directorio* carpeta1 = new Directorio("Root 2","Trabajo Noel",archivo->getRoot());

	carpeta1->agregarArchivo(new CPP(200,40,"CPP 1","Noel",archivo->getRoot()));
	carpeta1->agregarArchivo(new JPG(true,"1080",58.6,90.6,"JPG 1","Noel",archivo->getRoot()));
	carpeta1->agregarArchivo(new PPT("Presentacion 1",8,1,true,"La Historia de Honduras","Noel",archivo->getRoot()));

	Directorio* carpeta2 = new Directorio("Root 2","Trabajo Carlos",carpeta1);

	carpeta2->agregarArchivo(new CPP(400,10,"CPP 2","Carlos",archivo->getRoot()));
	carpeta2->agregarArchivo(new JPG(false,"1080",80.2,120.4,"JPG 2","Carlos",archivo->getRoot()));
	carpeta2->agregarArchivo(new PPT("Presentacion 2",12,2,true,"La Historia de la Computacion","Carlos",archivo->getRoot()));

	Directorio* carpeta3 = new Directorio("Root 3", "Trabajo Tyler",carpeta2);

	carpeta3->agregarArchivo(new CPP(300,2,"CPP 3","Tyler",archivo->getRoot()));
	carpeta3->agregarArchivo(new JPG(true,"1080",75.3,105.5,"JPG 3","Tyler",archivo->getRoot()));
	carpeta3->agregarArchivo(new PPT("Presentacion 3",8,1,true,"Historia de Roatan","Tyler",archivo->getRoot()));

	carpeta1->agregarDirectorio(carpeta2);
	carpeta2->agregarDirectorio(carpeta3);

	system("color 0a");
	int opcion=0;
	while(opcion != 5) {
		switch(opcion=menu()) {
			case 1: {
				//Imprimir FileSystem
				cout <<"[=======================]"<<endl;
				cout << "      FileSystem        "<<endl;
				cout <<"[=======================]"<<endl;
				archivo->getRoot()->imprimirRecursivo(0);
				break;
			}
			case 2: {
				//Agregar Directorios
				cout <<"[=======================]"<<endl;
				cout << "      Directorio        "<<endl;
				cout <<"[=======================]"<<endl;
				string nombre,autor;
				cout << "Ingrese el nombre del archivo: "<<endl;
				getline(cin,nombre);
				getline(cin,nombre);
				cout << "Ingrese el nombre del autor: "<<endl;
				getline(cin,autor);
				getline(cin,autor);
				archivo->getRoot()->agregarDirectorio(new Directorio(nombre,autor,archivo->getRoot()));
				break;
			}
			case 3: {
				//Agregar Archivos
				int opcionSubmenu=0;
				while(opcionSubmenu != 5) {
					switch(opcionSubmenu=subMenu()) {
						case 1: {
							//CPP
							cout <<"[=======================]"<<endl;
							cout << "     Archivo CPP        "<<endl;
							cout <<"[=======================]"<<endl;
							string nombre,autor;
							int numLineas, numErrores;
							cout << "Ingrese el numero de lineas del codigo: "<<endl;
							cin >> numLineas;
							while(numLineas < 0) {
								cout << "Las lineas no pueden ser negativas, intente nuevamente!" << endl;
								cout << "Ingrese el numero de lineas del codigo: "<<endl;
								cin>>numLineas;
							}
							cout << "Ingrese el numero de errores del codigo: "<<endl;
							cin >> numErrores;
							while(numErrores < 0) {
								cout << "Los Errores no pueden ser negativos, intente nuevamente!" << endl;
								cout << "Ingrese el numero de errores del codigo: "<<endl;
								cin >> numErrores;
							}
							cout << "Ingrese el nombre del archivo: "<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout << "Ingrese el nombre del autor: "<<endl;
							getline(cin,autor);
							getline(cin,autor);
							archivo->getRoot()->agregarArchivo(new CPP(numLineas,numErrores,nombre,autor,archivo->getRoot()));
							break;
						}
						case 2: {
							//JPG
							cout <<"[=======================]"<<endl;
							cout << "     Archivo JPG        "<<endl;
							cout <<"[=======================]"<<endl;
							bool conFlash = false;
							string resolucion,nombre,autor;
							int largo,ancho;
							char resp='s';
							cout << "Lo desea con Flash [S] = Si [N] = No" <<endl;
							cin>>resp;
							if(resp=='s' || resp=='S') {
								conFlash = true;
								cout << "Usted ha seleccionado que lo desea con flash" << endl;
							}else{
								conFlash = false;
								cout << "Usted ha seleccionado que no lo desea con flash" << endl;
							}
							cout << "Ingrese la resolucion: "<<endl;
							getline(cin,resolucion);
							getline(cin,resolucion);
							cout << "Ingrese el largo del archivo: "<<endl;
							cin >> largo;
							while(largo <= 0) {
								cout << "El largo no puede ser menor o igual a cero, intente nuevamente!"<<endl;
								cout << "Ingrese el largo del archivo: "<<endl;
								cin >> largo;
							}
							cout << "Ingrese el ancho del archivo: "<<endl;
							cin >> ancho;
							while(ancho <= 0) {
								cout << "El ancho no puede ser menor o igual a cero, intente nuevamente!"<<endl;
								cout << "Ingrese el ancho del archivo: "<<endl;
								cin >> ancho;
							}
							cout << "Ingrese el nombre del archivo: "<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout << "Ingrese el nombre del autor: "<<endl;
							getline(cin,autor);
							getline(cin,autor);
							archivo->getRoot()->agregarArchivo(new JPG(conFlash,resolucion,largo,ancho,nombre,autor,archivo->getRoot()));
							break;
						}
						case 3: {
							//PPT
							cout <<"[=======================]"<<endl;
							cout << "     Archivo PPT        "<<endl;
							cout <<"[=======================]"<<endl;
							string nombre,autor,titulo;
							int numSlides,numPlantillas;
							bool tieneAnimaciones=false;
							char resp='s';
							cout << "Ingrese el titulo del archivo: "<<endl;
							getline(cin,titulo);
							getline(cin,titulo);
							cout << "Ingrese el numero de diapositivas: "<<endl;
							cin >> numSlides;
							while(numSlides <= 0) {
								cout << "Las diapositivas no pueden ser menor o igual a cero, intente nuevamente!"<<endl;
								cout << "Ingrese el numero de diapositivas: "<<endl;
								cin >> numSlides;
							}
							cout << "Ingrese el numero de plantillas: "<<endl;
							cin >> numPlantillas;
							while(numPlantillas <= 0) {
								cout << "Las plantillas no pueden ser menor o igual a cero, intente nuevamente!"<<endl;
								cout << "Ingrese el numero de plantillas: "<<endl;
								cin >> numPlantillas;
							}
							cout << "Las diapositivas tiene animaciones? Ingrese [S] = Si o Ingrese [N] = No" <<endl;
							cin>>resp;
							if(resp=='s' || resp=='S') {
								tieneAnimaciones = true;
								cout<< "Usted ha seleccionado que si tiene animaciones" <<endl;
							}else{
								tieneAnimaciones = false; 
								cout<< "Usted ha seleccionado que no tiene animaciones" <<endl;
							}
							cout << "Ingrese el nombre del archivo: "<<endl;
							getline(cin,nombre);
							getline(cin,nombre);
							cout << "Ingrese el nombre del autor: "<<endl;
							getline(cin,autor);
							getline(cin,autor);
							archivo->getRoot()->agregarArchivo(new PPT(titulo,numSlides,numPlantillas,tieneAnimaciones,nombre,autor,archivo->getRoot()));
							break;
						}
					}
				}
				break;
			}
			case 4: {
				//Buscar por nombre
				string buscador;
				cin.ignore();
				cout << "Ingrese el nombre del archivo a buscar: " <<endl;
				getline(cin,buscador);
				cout << endl;
				archivo->getRoot()->BuscarPorNombre(buscador);
				break;
			}
			case 5: {
				cout << "Gracias Por Utilizar el Sistema de Archivos! Vuelva Pronto...";
				break;
			}
			default: {
				cout << "Dato introducido no es valido!";
				break;
			}
		}
	}

	delete archivo;
	delete carpeta1;
	delete carpeta2;
	delete carpeta3;
	return 0;
}