#include <iostream>
using namespace std;

int dodawanie(int a, int b)
{
    return a + b;
}
int odejmowanie(int a, int b)
{
    return a - b;
}
int mnożenie(int a, int b)
{
    return a * b;
}
double dzielenie(int a,int b)
{
    return a / b;
}

int main()
{
    cout << dodawanie(4, 5) << endl;
    cout << odejmowanie(11,6) << endl;
    cout << mnożenie(7,3) << endl;
    cout << dzielenie(10,5) << endl;
}