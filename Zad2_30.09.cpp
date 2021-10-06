// Obwód trapezu posiadając tylko a,b,h / Pole trapezu, Trójkąta, Prostokoąta.

#include <iostream>
#include <math.h>
using namespace std;

float trapez(float a, float b, float h) {
    return ((a + b) * h) / 2;
}

float trojkat(float a, float b) {
    return (a + b) / 2;
}

float prostokat(float a, float b) {
    return a * b;
}

float obwod_trapez(float a, float b, float h, float z, float c) {
    return a + b + ((h * h) - ((((b - a) / 2)) * (((b - a) / 2)))) + ((h * h) - ((((b - a) / 2)) * ((b - a) / 2)));
}

int main()
{
    int x;

    cout << "Wybierz numer:" << endl;
    cout << "1. Pole trapezu \n2. Pole trojkata \n3. Pole prostokata \n4. Obwod trapezu" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << trapez(5, 8, 4) << endl;
        break;
    case 2:
        cout << trojkat(6, 8) << endl;
        break;
    case 3:
        cout << prostokat(4, 5) << endl;
        break;
    case 4:
        cout << obwod_trapez(4, 7, 6, 0, 0) << endl;
        break;
    }
}

