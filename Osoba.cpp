#include "Osoba.h"
#include<iostream>
using namespace std;



Osoba::Osoba(string imie, string nazwisko)
{
	this->Imie = imie;
	this->Nazwisko = nazwisko;
}

void Osoba::Druk()
{
	cout << "Imie: "<<Imie << "\nNazwisko: " << Nazwisko << endl;
}
