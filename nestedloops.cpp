#include <iostream>

int main()
{
    int Zeile, Spalte;
    char Symbol;

    std::cout << "Wie viele Zeilen moechtest du darstellen?";
    std::cin >> Zeile;

    std::cout << "Wie viele Spalten moechtest du darstellen?";
    std::cin >> Spalte;

    std::cout << "Welches Symbol moechtest du darstellen?";
    std::cin >> Symbol;

    for(int index = 1; index <= Zeile; index++)
    {
        for(int innerindex = 1; innerindex <= Spalte; innerindex++)
        {
            std::cout << Symbol;
        }
        std::cout << '\n';
    }

    return 0;
}