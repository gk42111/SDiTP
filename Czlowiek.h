#include <string>
using namespace std;
class Czlowiek {
private:
	string imie; //pole prywatne
	int wiek; //pole prywatne
public:
	void UstawImie(string imie, int wiek)
	{
		this->imie = imie;
		this->wiek = wiek;
	}
	void WypiszImie();
};