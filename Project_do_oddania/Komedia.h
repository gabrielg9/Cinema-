#pragma once
#include<iostream>
#include<string>
#include"Film.h"

using namespace std;

class Komedia : public Film
{
public:
	Komedia();
	~Komedia();
	static double cenaZKodemRabatowym();
};
