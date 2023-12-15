#include <iostream>
#include <string>

std::string combineStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}

int main()
{
    std::string Vorname;
    std::string Nachname;

    std::cout << "Bitte gib deinen Nachnamen ein.";
    std::cin >> Nachname;
    std::cout << "Bitte gib deinen Vornamen ein.";
    std::cin >> Vorname;

    std::string VollerName = combineStrings(Vorname, Nachname);

    std::cout << "Hallo " << VollerName <<  ", schoen dich hier zu haben.\n";

    return 0;
}