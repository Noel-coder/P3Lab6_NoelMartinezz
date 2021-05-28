#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include <string>
#include <iostream>
using namespace std; 
class FileSystemNode
{
	public:
		FileSystemNode();
		~FileSystemNode();
		virtual string toString()=0;
	protected:
		string nombre;
		string autor;
		FileSystemNode* padre;
};

#endif