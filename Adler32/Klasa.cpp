#include "stdafx.h"
#include "Klasa.h"


unsigned int klasa::licz(string str)
{
	unsigned int k = 0;
	for (int i = 0; i < str.size(); i++)
	{
		k = str[i];
		A = (A + k)%65521;
		B =  (B + A)%65521;
	}
	return (B*65536)+A;
}

void klasa::symuluj(int d)
{
	
	string x = "";
	srand(time(NULL));
	ofstream plik("dane.txt");

	for (int i = 0; i < 130000; i++)
	{
		for (int j = 0; j < d; j++)
		{
			x += (rand() % 25) + 97;
		}
		tab1.push_back(x);
		tab2.push_back(licz(x));
		plik << x << " " << licz(x) << endl;
		x = "";
	}
}

void klasa::kolizja()
{
	
	string tmp = "";
	unsigned int tmp1 = 0;

	unsigned int licznik = 0;

	for (int i = 0; i < 130000; i++)
	{
		tmp = tab1[i];
		tmp1 = tab2[i];
		for (int j = i + 1; j < 130000; j++)
		{
			if (tmp1 == tab2[j])
			{
				cout << tmp << " " << tab1[j] << " " << tmp1 << endl;
				licznik++;
			}
		}
	}


	cout <<"ilosc kolizji: "<< licznik << endl;
}
