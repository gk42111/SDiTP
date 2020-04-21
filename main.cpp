#include <iostream>
#include "Punkt.h"
#include "Tablice.h"
#include "TabDyn.h"
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

	system("pause");
	return 0;
}