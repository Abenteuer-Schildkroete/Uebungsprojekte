#include <iostream>
#include <string>

int main()
{
    std::string Name;

    std::cout << "Bitte gib deinen Namen ein.\n";
    std::getline(std::cin, Name);
/*
    Name.clear();                           //mit ".clear()" kann ein "string" geleert werden.
*/
/*
    Name.append("@yahoo.de");               //mit ".append()" koennen zwei "strings" zusammengefuehrt oder ein Namenszusatz erzeugt werden.
*/
/*
    if(Name.length() > 12)
    {
        std::cout << "Dein Name kann leider nur 12 Zeichen enthalten.\n";
    }
    else
    {
        std::cout << "Willkommen " << Name;
    }
*/
    if(Name.empty())
    {
        std::cout << "Du hast keinen Namen eingegeben.\n";
    }
    else
    {
        std::cout << "Hallo " << Name << '\n';
    }

    //std::cout << Name.at(0);              //mit ".at()" kann ein Zeichen einer bestimmten Position innerhalb eines "strings" ausgegeben werden.

    Name.insert(0, "@");                    //mit ".insert()" kann ein Zeichen an einer bestimmten Position innerhalb eines "strings" hinzugefuegt werden.
    std::cout << Name << '\n';

    std::cout << Name.find(' ') << '\n';    //mit ".find()" kann ein String nach einem bestimmten Zeichen durchsucht werden und dessen Position innerhalb des "strings" ausgeben.

    Name.erase(0, 5);                       //mit ".erase() kann ein bestimmter Teil (von, bis) eines "strings" gelöscht werden.
    std::cout << Name << '\n';

    return 0;
}