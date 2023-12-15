#include <iostream>
#include <string>

//FUNCTIONS
//Funktionen sind wiederverwendbare Bloecke aus Code die eine bestimmte Aufgabe haben

std::string Name;
int Alter;

void Gebutstagslied()
{
    std::cout << "Happy Birthday to you.\n";
    std::cout << "Happy Birthday to you.\n";
    std::cout << "Happy Birthday liebe/r " << Name << ".\n";
    std::cout << "Happy Birthday to you.\n";
    std::cout << " \n";
}

int main()
{
    std::cout << "####### Geburtstagsliedgenerator #######\n";
    std::cout << "Bitte gib deinen Namen ein.\n";
    std::cin >> Name;
    std::cout << "Bitte gib ein wie alt du geworden bist.\n";
    std::cin >> Alter;

    Gebutstagslied();
    Gebutstagslied();
    Gebutstagslied();
    std::cout << "##############################################\n";
    std::cout << "Alles gute zum " << Alter << "ten Geburtstag liebe/r " << Name << ".\n";
    std::cout << "##############################################\n";

    return 0;
}