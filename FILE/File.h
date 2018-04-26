#pragma once
#include "Libery.h"

struct date 
{
	int day;
	int year;
};

class File
{
	char name[30]; 
	date t;
	int obrash;
	int razmer;
public:
	File();
	char *getalf();
	void setalf(char *);
	int getrazmer();
	int getobrash();
	void show();
	//methods
	friend void spisalf(File spis[], int n);
	friend void spisrazmer(File spis[], int n);
	friend void spisobrash(File spis[], int n);
	~File();
};

