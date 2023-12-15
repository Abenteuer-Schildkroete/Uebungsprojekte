#include <iostream>
#include <ctime>

int main()
{
    int Nummer;
    int Tipp;
    int Versuche = 0;

    srand(time(0));
    Nummer = (rand() % 100) + 1;

    std::cout << "########## Zahlenratespiel ##########\n";

    do
    {
        std::cout << "Errate die Zahl zwischen 1 und 100.\n";
        std::cin >> Tipp;
        Versuche+=1;

        if(Tipp > Nummer)
        {
            std::cout << "Leider Falsch, du hast zu hoch geraten.\n";
        }
        else if(Tipp < Nummer)
        {
            std::cout << "Leider Falsch, du hast zu niedrig geraten.\n";
        }
        else
        {
            std::cout << "RICHTIG, du hast mit " << Versuche << " Versuchen richtig geraten.\n";
        }
    }
    while(Tipp != Nummer);

    std::cout << "#####################################\n";

    return 0;
}