#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int tab[2][2];
	int a, b;

	for (a = 0; a < 2; a++) 
	{
		
		for (b = 0; b < 2; b++) 
		{
			
			cout << "Podaj liczbe ";
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

}