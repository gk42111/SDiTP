#pragma once
#include <iostream>
using namespace std;
#include "Osoba.h"
class Student
{
	Osoba Stud;
	int ECTS;
public:
	Student(string, string, int);
	bool CzyZdal();
	void DaneStudenta();
};

