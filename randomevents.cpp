#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random: nicht wirklich zufällig aber benahe.
    srand(time(0));

    int Zufallszahl = rand() % 5 + 1;        //generiert eine Zahl zwischen 1 und 5

    switch(Zufallszahl)
    {
        case 1: std::cout << "Du hast einen T-shirt gewonnen! " << '\n';
            break;
        case 2: std::cout << "Du hast einen Schuesselanhaenger gewonnen! " << '\n';
            break;
        case 3: std::cout << "Du hast einen Aufkleber gewonnen! " << '\n';
            break;
        case 4: std::cout << "Du hast einen Geschenkgutschein gewonnen! " << '\n';
            break;
        case 5: std::cout << "Du hast den Hauptgewinn, zwei Eintrittskarten, gewonnen! " << '\n';
            break;
    }

    return 0;
}