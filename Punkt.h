#pragma once
class Punkt
{
private:
	int X;
	int Y;
public:
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
	void Przesuniecie(int, int);
	Punkt();
	Punkt(int, int);

};