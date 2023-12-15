#include <iostream>

int main()
{
    int Nummer;

    do
    {
        std::cout << "Gib eine positive Zahl ein: ";
        std::cin >> Nummer;
    }
    while(Nummer <= 0);

    std::cout << "Die eingegebene Nummer ist: " << Nummer;

    return 0;
}