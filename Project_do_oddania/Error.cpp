#include"Error.h"

using namespace std;

Error::Error(string komunikat)
{
	this->komunikat = komunikat;
}

Error::~Error()
{
	//Destruktor klasy Error
}

void Error::sprawdz_godzine(int godzina)
{
	string komunikat = "Z³a godzina, wybierz miedzy <0, 24>";
	string komunikat2 = "Po tej godzinie nie ma ju¿ zaplanowanych seansów, wpisz innn¹ godzinê";
	if (!(godzina >= 0 && godzina <= 24))
		throw Error(komunikat);
	if(godzina>=21 && godzina <=24)
		throw Error(komunikat2);
}

void Error::sprawdz_gatunek(int gatunek)
{
	string komunikat = "Poda³eœ z³y gatunek, wprowadŸ liczbê od 1 do 3";
	if (!(gatunek >= 1 && gatunek <=3))
		throw Error(komunikat);
}

void Error::sprawdz_numer(string numer, int godzina)
{
	string komunikat = "Z³y numer, wprowadŸ numer poprawnie ";
	if (!(numer == "1" || numer == "2" || numer == "3" || numer == "4" || numer == "5" || numer == "6" || numer == "7"))
		throw Error(komunikat);
	if (godzina >= 10 && godzina < 11)
	{
		if (!(numer != "1"))
			throw Error(komunikat);
	}
	else if (godzina >= 11 && godzina < 14)
	{
		if (!(numer != "1" && numer != "2"))
			throw Error(komunikat);
	}
	else if (godzina >= 14 && godzina < 16)
	{
		if (!(numer != "1" && numer != "2" && numer != "3"))
			throw Error(komunikat);
	}
	else if (godzina >= 16 && godzina < 18)
	{
		if (!(numer != "1" && numer != "2" && numer != "3" && numer != "4"))
			throw Error(komunikat);
	}
	else if (godzina >= 18 && godzina < 19)
	{
		if (!(numer != "1" && numer != "2" && numer != "3" && numer != "4" && numer != "5"))
			throw Error(komunikat);
	}
	else if (godzina >= 19 && godzina < 21)
	{
		if (!(numer != "1" && numer != "2" && numer != "3" && numer != "4" && numer != "5" && numer != "6"))
			throw Error(komunikat);
	}
}