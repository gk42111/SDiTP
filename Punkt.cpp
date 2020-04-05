#include "Punkt.h"
int Punkt::GetX(){	return X;}int Punkt::GetY(){	return Y;}

void Punkt::SetX(int X)
{
	this->X = X;
}

void Punkt::SetY(int Y)
{
	this->Y = Y;
}

void Punkt::Przesuniecie(int X, int Y)
{
	this->X += X;
	this->Y += Y;
}

Punkt::Punkt()
{
}

Punkt::Punkt(int X, int Y)
{
	this->X = X;
	this->Y = Y;

}