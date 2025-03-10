#pragma once
#include <Windows.h>
#include <iostream>
#include <string>

#include "PhysFS/physfs.h"
#pragma comment(lib, "physfs.lib")

using namespace std;

class VFS
{
public:
	VFS();
	VFS(string dir);
	~VFS();

	void AddDir(string dir);
	void AddFile(string fname);

	BOOL FileExists(string fname);
	long GetFileSize(string fname);
};

