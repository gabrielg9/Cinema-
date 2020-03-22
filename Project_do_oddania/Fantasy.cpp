#include<iostream>
#include<string>
#include"Fantasy.h"
#include"Film.h"

using namespace std;
int tablicaKodow;

Fantasy::Fantasy()
{

}

Fantasy::~Fantasy()
{

}

double Fantasy::cenaZKodemRabatowym()
{
	int tablicaKodow[10] = { 111, 222, 333, 444, 555, 666, 777, 888, 999, 000 };
	cout << endl << "Podaj 3-cyfrowy kod rabatowy: ";
	int kod;
	cin >> kod;
	bool zamiana = false;
	for (int i = 0; i < 10; i++)
	{
		if (tablicaKodow[i] == kod)
		{
			zamiana = true;
			break;
		}
		else
		{
			zamiana = false;
		}
	}
	if (zamiana == 1)
	{
		cena *= 0.7;
		cout << endl << "Kod poprawny, cena zosta³a obni¿ona o 30% i teraz wynosi ona " << cena << " z³otych" << endl;
		return cena;
	}
	else
	{
		cout << endl << "Kod nieprawid³owy - cena wynosi " << cena << " z³otych" << endl;
		return cena;
	}
}