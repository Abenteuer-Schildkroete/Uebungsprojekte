#include <iostream>
#include <string>

//USER INPUTS
//"cout" erlaubt einen Character-Output.
//"cin" erlaubt einen Character-Input.

int main(){
    std::string name;
    int age;

    std::cout << "Wie lautet dein Name?";
    std::getline(std::cin >> std::ws, name); // "std::getline" ermöglicht Nutzereingaben die Leerzeichen enthalten. 
                                            //"std::ws" verhindert das Widespaces oder neue Zeilen aus dem Buffer übernommen werden.
    std::cout << "Wie alt bist du?";
    std::cin >> age;

    std::cout << "Hallo " << name << "," << '\n';
    std::cout << "du bist " << age << " Jahre alt." << '\n';

    return 0;
}