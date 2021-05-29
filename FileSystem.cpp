#include "FileSystem.h"

FileSystem::FileSystem()
{
	this->root = new Directorio("Raiz", "Noel",NULL);
}

Directorio* FileSystem::getRoot(){
	return this->root;
}

