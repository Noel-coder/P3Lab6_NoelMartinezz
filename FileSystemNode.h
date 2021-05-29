#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include <string>
#include <iostream>
using namespace std; 
class FileSystemNode
{
	public:
		FileSystemNode(string,string,FileSystemNode*);
		~FileSystemNode();
		FileSystemNode();
		virtual string toString()=0;
		string getNombre();
		string getAutor();
	protected:
		string nombre;
		string autor;
		FileSystemNode* padre;
};

#endif