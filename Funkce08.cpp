
#include <iostream>
#include <cmath>

using namespace std;

bool JePrvocislo(int n, int& minD, int& maxD)
{
	bool prvocislo = true;
	bool nejmensi = false;
	bool nejvetsi = false;
	if (n < 2)
	{
		prvocislo = false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			prvocislo = false;

		}

	}
	for (int i = 2; i < n && !nejmensi; i++)
	{
		if (n % i == 0)
		{
			minD = i;
			nejmensi = true;
		}
	}
	for (int i = n - 1; i >= 2 && !nejvetsi; i--)
	{
		if (n % i == 0)
		{
			maxD = i;
			nejvetsi = true;
		}
	}

	return prvocislo;
}


int main()
{
   
	int n;
	int nejmesiDel;
	int nejvetsiDel;
	cout << "Zadej cislo: ";
	cin >> n;
	if (JePrvocislo(n, nejmesiDel, nejvetsiDel))
	{
		cout << "Cislo JE prvocislo delitelne je 1 a samo sebou" << endl;
	}
	else
	{
		cout << "Cislo NENI prvocislo a jeho nejmesi delitel je " << nejmesiDel << " jeho nejvetsi delitel je " << nejvetsiDel << endl;
	}


}

