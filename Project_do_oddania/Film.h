#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include"Plik.h"

using namespace std;
class Plik;

class Film
{
protected:
	static double cena;
public:
	Film();
	~Film();
	friend class Plik;
	static double cenaZKodemRabatowym();
};