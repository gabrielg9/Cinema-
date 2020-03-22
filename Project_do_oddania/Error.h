#pragma once
#include<iostream>
#include<string>
#include<exception>

using namespace std;

class Error :public exception
{
	string komunikat;
public:
	virtual const char* what() const throw()
	{
		return komunikat.c_str();
	}
	static void sprawdz_godzine(int godzina);
	static void sprawdz_gatunek(int gatunek);
	static void sprawdz_numer(string numer, int godzina);
	Error(string);
	~Error() throw();
};
