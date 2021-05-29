#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "Directorio.h"

class FileSystem
{
	public:
		FileSystem();
		Directorio* getRoot();
	protected:
		Directorio* root;
};

#endif