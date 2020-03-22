#pragma once
#include<iostream>
#include<string>
#include"Film.h"

using namespace std;

class Akcja : public Film
{
public:
	Akcja();
	~Akcja();
	static double cenaZKodemRabatowym();
	
};
