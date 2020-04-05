#include "Vector.h"
Vector::Vector(double xx, double yy)
	:P(xx, yy) {}

double Vector::dodawanie(Vector W)
{
	return P.GetX() + P.GetY() + W.P.GetX()+W.P.GetY();
}

double Vector::odejmowanie(Vector W)
{
	return P.GetX() - P.GetY() - W.P.GetX() - W.P.GetY();
}

double Vector::mnozenie(Vector W)
{
	return P.GetX() * P.GetY() * W.P.GetX() * W.P.GetY();
}

double Vector::dzielenie(Vector W)
{
	return P.GetX() / P.GetY() / W.P.GetX() / W.P.GetY();
}
