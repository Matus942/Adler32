// Adler32.cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "Klasa.h"

int main()
{
	klasa l;
	//cout<<l.licz("tset")<<endl;
	cout << "symuluje..."<<endl;
	l.symuluj(18);
	cout << "licze..." << endl;
	l.kolizja();
	cout << "skonczylem..." << endl;
	system("PAUSE");
	return 0;
}

