#include "TabDyn.h"

TabDyn::TabDyn(int size)
{
	this->Size = size;
	control = 0;
}

void TabDyn::SetElement(int element)
{
	TablicaDyn[control] = element;
	control++;
}

int TabDyn::GetElement(int element)
{
	return TablicaDyn[element];
}

int TabDyn::Sum()
{
	int suma = 0;
	for (int i = 0; i < 10; i++) {
		suma += TablicaDyn[i];
	}
	return suma;
}

int TabDyn::Mean()
{
	int suma = 0;
	for (int i = 0; i < Size; i++) {
		suma += TablicaDyn[i];
	}
	return suma/Size;
}
