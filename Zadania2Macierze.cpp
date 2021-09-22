#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	
	int tab[2][2];
	int a, b;

	for (a = 0; a < 2; a++) 
	{
		
		for (b = 0; b < 2; b++) 
		{
			
			cin >> tab[a][b];

		}

	}
	
	for (a = 0; a < 2; a++) 
	{
		
		for (b = 0; b < 2; b++) 
		{
			
			cout << tab[a][b];

		}
		
		cout << endl;

	}

	int m = tab[0][1] * tab[1][0] - (tab[0][0] * tab[1][1]);
	
	cout << "Wyznacznik Macierzy: " << m << endl;

}