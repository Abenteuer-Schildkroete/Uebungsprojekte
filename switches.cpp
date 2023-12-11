#include <iostream>

//SWITCHES
//"switches" ist eine Alternative zur Nutzung vieler "else if" statements und vergleicht einen Wert mit Vergleichsfaellen.

int main(){

    int month;

    std::cout << "Bitte gib die Zahl des aktuellen Monats ein (1-12).";
    std:: cin >> month;
    
    switch(month){
        case 1:
            std::cout << "Es ist Januar.";
            break;
        case 2:
            std::cout << "Es ist Februar.";
            break;    
        case 3:
            std::cout << "Es ist Maerz.";
            break;
        case 4:
            std::cout << "Es ist April.";
            break;
        case 5:
            std::cout << "Es ist Mai.";
            break;
        case 6:
            std::cout << "Es ist Juni.";
            break;
        case 7:
            std::cout << "Es ist Juli.";
            break;    
        case 8:
            std::cout << "Es ist August.";
            break;
        case 9:
            std::cout << "Es ist September.";
            break;
        case 10:
            std::cout << "Es ist October.";
            break;
        case 11:
            std::cout << "Es ist November.";
            break;
        case 12:
            std::cout << "Es ist Dezember.";
            break;
        default:
            std::cout << "Bitte gib nur Zahlen zwischen 1 und 12 ein.";
            break;
    }

    return 0;
}