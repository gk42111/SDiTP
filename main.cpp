#include <iostream>
#include "Punkt.h"
#include "Tablice.h"
#include "TabDyn.h"
#include "Vector.h"
#include "Student.h"
using namespace std;
int main() {
	//Zad1
	Punkt punkt1(1,1), punkt2(2,2);
	cout << punkt1.GetX() << " " << punkt1.GetY() << endl;
	punkt1.Przesuniecie(3, 2);
	cout << punkt1.GetX() << " " << punkt1.GetY() << endl;
	cout << punkt2.GetX() << " " << punkt2.GetY() << endl;
	punkt2.SetX(8);
	punkt2.SetY(5);
	cout << punkt2.GetX() << " " << punkt2.GetY() << endl;
	
	//Zad2
	Tablice tablice1,tablice2;
	cout << tablice1.Max() << " " << tablice1.Min() << endl;
	cout << tablice2.Suma() << endl;

	//Zad3
	TabDyn tab(10);
	tab.GetElement(9);
	tab.SetElement(8);
	cout << tab.Sum() << endl;
	cout << tab.Mean() << endl;

	//Zad4
	Vector v(1, 2), v1(3,4);
	cout << v.dodawanie(v1)<< endl;
	cout << v.odejmowanie(v1) << endl;
	cout << v.mnozenie(v1) << endl;
	cout << v.dzielenie(v1) << endl;
	
	//Zad5
	Student s1("Jan", "Kowalski", 25);
	Student s2("Adam", "Nowak", 20);
	cout << s1.CzyZdal() << endl;
	cout << s2.CzyZdal() << endl;
	s1.DaneStudenta();
	s2.DaneStudenta();
	
	system("pause");
	return 0;
}