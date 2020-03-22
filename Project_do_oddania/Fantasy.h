#pragma once
#include<iostream>
#include<string>
#include"Film.h"

using namespace std;

class Fantasy : public Film
{
public:
	Fantasy();
	~Fantasy();
	static double cenaZKodemRabatowym();
};
