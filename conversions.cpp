#include <iostream>

//CONVERSIONS

int main(){

    double Temperatur;
    char Einheit;

    std::cout << "########## Temperaturkonverter ##########" << '\n';
    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "In welche Einheit moechtest du deine Temperatur konvertieren? ";
    std::cin >> Einheit;

    if(Einheit == 'F' || Einheit == 'f'){
        std::cout << "Bitte gib die Temperatur in Celsius ein: ";
        std::cin >> Temperatur;

        std::cout << Temperatur << " grad Celsius";
        Temperatur = (1.8 * Temperatur) + 32.0;
        std::cout << " entspricht " << Temperatur << " grad Fahrenheit" << '\n';
    }
    else if(Einheit == 'C' || Einheit == 'c'){
        std::cout << "Bitte gib die Temperatur in Fahrenheit ein: ";
        std::cin >> Temperatur;

        std::cout << Temperatur << " grad Fahrenheit";
        Temperatur = (Temperatur - 32.0) / 1.8;
        std::cout << " entspricht " << Temperatur << " grad Celsius" << '\n';
    }
    else{
        std::cout << "Bitte waehle C fuer Celsius oder F fuer Fahrenheit." << '\n';
    }

    std::cout << "#########################################" << '\n';

    return 0;
}