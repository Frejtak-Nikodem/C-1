#include <iostream>
#include <math.h>
using namespace std;

//Pole prostokąta
void Pole1(int a, int b)
{
    cout << a * b << endl;
}
//Pole trapezu
void Pole2(int a, int b, int h)
{
    cout << ((a + b) * h) / 2 << endl;
}
//Pole trójkąta
void Pole3(int a, int h)
{
    cout << (a * h) / 2 << endl;

}


int main()
{
    Pole1(4, 7);
    Pole2(2, 4, 5);
    Pole3(4, 5);
}