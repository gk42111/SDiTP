#include "Student.h"

Student::Student(string imie, string nazwisko, int ects) :Stud(imie,nazwisko)
{
	this->ECTS = ects;
}

bool Student::CzyZdal()
{
	if (ECTS < 22) return false;
	else return true;
}

void Student::DaneStudenta()
{
	Stud.Druk();
	cout << "Czy zdal: " << CzyZdal() << endl;
}
