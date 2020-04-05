#include "Tablice.h"
#include <iostream>



Tablice::Tablice()
{
	for (int i = 0; i < 10; i++) {
		Tab1D[i] = rand();
	}
}

int Tablice::Suma()
{
	int suma = 0;
	for (int i = 0; i < 10; i++) {
		suma += Tab1D[i];
	}
	return suma;
}

int Tablice::Max()
{
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (max < Tab1D[i]) 
		{ 
			max = Tab1D[i];
		}
	}
	return max;
}

int Tablice::Min()
{
	int min = Tab1D[0];
	for (int i = 0; i < 10; i++) {
		if (min > Tab1D[i])
		{
			min = Tab1D[i];
		}
	}
	return min;
}


