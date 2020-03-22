#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Plik
{
public:
	static void odczyt_danych_z_pliku(string *tab, int godzina, int gatunek);
	static void zapis_danych_do_pliku(string *tab, int numer, int gatunek);
};