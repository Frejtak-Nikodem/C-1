#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	
	int tab[10][10];
	
	for (int a = 0; a < 10; a++) 
	{
		
		for (int b = 0; b < 10; b++) 
		{
			
			if (a == b) 
			{
				
				tab[a][b] = a;

			}
			else 
			{
				
				tab[a][b] = 0;

			}

			cout << tab[a][b];

		}
		
		cout << endl;

	}
}