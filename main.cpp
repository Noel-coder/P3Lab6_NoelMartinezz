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

int main(int argc, char** argv) {
	system("color 0a");
	int opcion=0;
	while(opcion != 5) {
		switch(opcion=menu()){
			case 1:{
				//Imprimir FileSystem
				break;
			}
			case 2:{
				//Agregar Directorios
				break;
			}
			case 3:{
				//Agregar Archivos
				break;
			}
			case 4:{
				//Buscar por nombre
				break;
			}
			case 5:{
				cout << "Gracias Por Utilizar el Sistema de Archivos! Vuelva Pronto...";
				break;
			}
			default:{
				cout << "Dato introducido no es valido!";
				break;
			}
		}
	}
	return 0;
}