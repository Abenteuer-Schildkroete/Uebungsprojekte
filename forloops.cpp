#include <iostream>

int main()
{
    for(int index = 1; index <= 5; index++) // mit "--" kann stattdessen runtergezaehlt werden oder mit "+=" und "-=" die Schrittgroeße geaendert werden.
    {
        std::cout << index << '\n';
    }

    std::cout << "Beispielaussage";

    return 0;
}