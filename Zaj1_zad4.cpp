#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int tab[10];
	int a = 0;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {

		tab[i] = rand() % 100 + 1;
		cout << tab[i] << endl;

		if (tab[i] > a)
			a = tab[i];
	}
	cout << x << endl;
}