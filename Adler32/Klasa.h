#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

class klasa
{
private:
	
	int A = 1;
	int B = 0;
	vector<string> tab1;
	vector<unsigned int>tab2;
public:
	unsigned int licz(string);
	void symuluj(int);
	void kolizja();
};

