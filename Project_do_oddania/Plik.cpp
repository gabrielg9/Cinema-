#include<iostream>
#include<fstream>
#include<string>
#include<typeinfo>
#include"Akcja.h"
#include"Fantasy.h"
#include"Komedia.h"
#include"Film.h"
#include"Plik.h"

using namespace std;

void Plik::odczyt_danych_z_pliku(string *tab, int godzina, int gatunek)
{
	if (gatunek == 1)
	{
		string napis;
		fstream plik("Akcja.txt");
		int i = 0;
		if (plik.good())
		{
			while (!(plik.eof()))
			{
				getline(plik, napis);
				tab[i] = napis;
				i++;
			}
		}
		else
			cout << "Nie znaleziono pliku";

		cout << endl << "Dostêpne filmy " << endl;
		if (godzina < 10)
		{
			for (int i = 0; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 10 && godzina < 11)
		{
			for (int i = 1; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 11 && godzina < 14)
		{
			for (int i = 2; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 14 && godzina < 16)
		{
			for (int i = 3; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 16 && godzina < 18)
		{
			for (int i = 4; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 18 && godzina < 19)
		{
			for (int i = 5; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 19 && godzina < 21)
		{
			for (int i = 6; i < 7; i++)
				cout << tab[i] << endl;
		}
	}

	else if (gatunek == 2)
	{
		string napis;
		fstream plik("Fantasy.txt");
		int i = 0;
		if (plik.good())
		{
			while (!(plik.eof()))
			{
				getline(plik, napis);
				tab[i] = napis;
				i++;
			}
		}
		else
			cout << "Nie znaleziono pliku";

		cout << endl << "Dostêpne filmy " << endl;
		if (godzina < 10)
		{
			for (int i = 0; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 10 && godzina < 11)
		{
			for (int i = 1; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 11 && godzina < 14)
		{
			for (int i = 2; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 14 && godzina < 16)
		{
			for (int i = 3; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 16 && godzina < 18)
		{
			for (int i = 4; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 18 && godzina < 19)
		{
			for (int i = 5; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 19 && godzina < 21)
		{
			for (int i = 6; i < 7; i++)
				cout << tab[i] << endl;
		}
	}

	else if (gatunek == 3)
	{
		string napis;
		fstream plik("Komedia.txt");
		int i = 0;
		if (plik.good())
		{
			while (!(plik.eof()))
			{
				getline(plik, napis);
				tab[i] = napis;
				i++;
			}
		}
		else
			cout << "Nie znaleziono pliku";

		cout << endl << "Dostêpne filmy " << endl;
		if (godzina < 10)
		{
			for (int i = 0; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 10 && godzina < 11)
		{
			for (int i = 1; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 11 && godzina < 14)
		{
			for (int i = 2; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 14 && godzina < 16)
		{
			for (int i = 3; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 16 && godzina < 18)
		{
			for (int i = 4; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 18 && godzina < 19)
		{
			for (int i = 5; i < 7; i++)
				cout << tab[i] << endl;
		}
		else if (godzina >= 19 && godzina < 21)
		{
			for (int i = 6; i < 7; i++)
				cout << tab[i] << endl;
		}
	}
}

void Plik::zapis_danych_do_pliku(string *tab, int numer, int gatunek)
{
	if (gatunek == 1)
	{
		Akcja *film = new Akcja;
		string typ;
		ofstream plik;
		plik.open("Rachunek.txt");
		typ = typeid(*film).name();
		typ.erase(0, 5);
		plik << "Gatunek " << typ << endl << "Tytu³ oraz godzina " << tab[numer - 1] << endl << "Cena " << film->cenaZKodemRabatowym() << endl;
		plik.close();
	}
	else if (gatunek == 2)
	{
		Fantasy *film = new Fantasy;
		string typ;
		ofstream plik;
		plik.open("Rachunek.txt");
		typ = typeid(*film).name();
		typ.erase(0, 5);
		plik << "Gatunek " << typ << endl << "Tytu³ oraz godzina " << tab[numer - 1] << endl << "Cena " << film->cenaZKodemRabatowym() << endl;
		plik.close();
	}
	else if (gatunek == 3)
	{
		Komedia *film = new Komedia;
		string typ;
		ofstream plik;
		plik.open("Rachunek.txt");
		typ = typeid(*film).name();
		typ.erase(0, 5);
		plik << "Gatunek " << typ << endl << "Tytu³ oraz godzina " << tab[numer - 1] << endl << "Cena " << film->cenaZKodemRabatowym() << endl;
		plik.close();
	}
}

