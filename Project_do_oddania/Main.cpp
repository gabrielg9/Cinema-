#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
#include"Film.h"
#include"Error.h"
#include"Plik.h"

using namespace std;

double Film::cena = 20;

int main()
{
	setlocale(LC_ALL, "pl-PL");
	cout << setw(50) << "Witamy w naszym kinie " << endl << endl;
	cout << "Podaj obecn� godzin� :  ";
	string napis;
	int godzina ;
	while (true)
	{
		getline(cin, napis);
		godzina = atoi(napis.c_str());
		try {
			Error::sprawdz_godzine(godzina);
			break;
		}
		catch (Error &e)
		{
			cout << e.what() << endl;
		}
	}

	string gatunekS;
	int gatunek;
	cout << "Podaj gatunek filmu " << endl << "1. Akcja" << endl << "2. Fantasy" << endl << "3. Komedia" << endl;
	while (true)
	{
		getline(cin, gatunekS);
		gatunek = atoi(gatunekS.c_str());
		try
		{
			Error::sprawdz_gatunek(gatunek);
			break;
		}
		catch (Error &e)
		{
			cout << e.what() << endl;
		}
	}

	if (gatunek == 1)
		cout << "Wybra�e� gatunek Akcja " << endl << endl;
	else if (gatunek == 2)
		cout << "Wybra�e� gatunek Fantasy " << endl << endl;
	else if (gatunek == 3)
		cout << "Wybra�e� gatunek Komedia " << endl << endl;
	
	string tablica_filmow[7];
	Plik::odczyt_danych_z_pliku(tablica_filmow, godzina, gatunek); 
	
	cout << endl << "Wybierz film poprzez podanie jego numeru : ";
	string numerS;
	while (true)
	{
		getline(cin, numerS);
		try {
			Error::sprawdz_numer(numerS, godzina);
			break;
		}
		catch (Error &e)
		{
			cout << e.what() << endl;
		}
	}
	
	int numer = atoi(numerS.c_str());
	cout << endl << "Wybra�e� film : " << tablica_filmow[numer - 1] << endl;

	Film::cenaZKodemRabatowym();

	Plik::zapis_danych_do_pliku(tablica_filmow, numer, gatunek);
	cout << endl << "Nast�pi�o wydrukowanie rachunku ( do pliku Rachunek.txt)" << endl << endl;
	cout << setw(50) << "�yczymy mi�ego seansu" << endl << endl;

	system("pause");
	return 0;
}

