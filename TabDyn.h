#pragma once
class TabDyn
{
public:
	int* TablicaDyn = new int [Size];
	int Size;
	int control;
	TabDyn(int);
	void SetElement(int);
	int GetElement(int);
	int Sum();
	int Mean();
};

