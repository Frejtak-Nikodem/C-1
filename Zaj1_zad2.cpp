#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int imię, nazwisko1;

    string imie[10] = { "Adam", "Paweł", "Michał", "Mikołaj", "Adrian", "Oskar", "Piotrek", "Bartek", "Krystian", "Patryk" };
    string nazwisko.[10] = { "Zwiefka", "Bendzmirowski", "Twardy", "Nowy", "Cienki", "Szeroki", "Jabłoński", "Adamczyk", "Wigura", "Żwirko" };
    srand(time(NULL));

    imię = rand() % 10 + 1;
    nazwisko1 = rand() % 10 + 1;

    cout << imie[imię] << " " << nazwisko[nazwisko1];

}