#include <iostream>
using namespace std;

int main()
{
	int i;
	int suma = 0;
	int tab[10]{ 1431, 1432, 1435, 1439, 1444, 1450, 1479, 1487, 1491, 1497 };
	for (i=0; i <= 9; i++)
	{
		cout << tab[i] << endl;
		suma = suma + tab[i];
	}
	cout << suma << endl;
}
