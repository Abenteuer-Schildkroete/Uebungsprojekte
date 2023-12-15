#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random: nicht wirklich zufällig aber benahe.
    srand(time(NULL));

    int Zufallszahl1 = (rand() % 6);        //generiert eine Zahl zwischen 0 und 6
    int Zufallszahl2 = (rand() % 20) + 1;   //generiert eine Zahl zwischen 1 und 20
    int Zufallszahl3 = (rand() % 100) + 1;  //generiert eine Zahl zwischen 1 und 100

    std::cout << "Zufaellige Zahl zwischen 0 und 6: " << Zufallszahl1 << '\n';
    std::cout << "Zufaellige Zahl zwischen 1 und 20: " << Zufallszahl2 << '\n';
    std::cout << "Zufaellige Zahl zwischen 1 und 100: " << Zufallszahl3 << '\n';

    return 0;
}