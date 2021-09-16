#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tab[12] = { 4, 5, 20, 125, 89, 65, 77, 2, 1, 0, 123, 47 };
    int a, b;
    for (i = 0; i <= 10; i++) {
        for (j = i + 1; j <= 11; j++)
        {
            int n;
            if (tab[i] > tab[j])
            {
                n = tab[i];
                tab[i] = tab[j];
                tab[j] = n;
            }
        }
    }
    for (i = 0; i <= 11; i++) {
        cout << endl << tab[i] << endl;
    }
}