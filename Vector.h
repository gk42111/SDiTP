#include "Punkt.h"
class Vector
{
	Punkt P;
public:
	Vector(double xx, double yy);
	double dodawanie(Vector W);
	double odejmowanie(Vector W);
	double mnozenie(Vector W);
	double dzielenie(Vector W);
};