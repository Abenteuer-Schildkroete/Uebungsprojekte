#include <iostream>

//CALCULATOR

int main(){

    char operation;
    double nummer1;
    double nummer2;
    double ergebnis;

    std::cout << "########## Taschenrechner ##########" << '\n';
    std::cout << "Gib eine Zahl ein." << '\n';
    std::cin >> nummer1;
    std::cout << "Gibt einen Operator ein (+, -, *, /)" << '\n';
    std::cin >> operation;
    std::cout << "Gib eine zweite Zahl ein." << '\n';
    std::cin >> nummer2;

    switch(operation){
        case '+':
            ergebnis = nummer1 + nummer2;
            std::cout << nummer1 << " Plus " << nummer2 << " ergibt gleich " << ergebnis << '\n';
            break;
        case '-':
            ergebnis = nummer1 - nummer2;
            std::cout << nummer1 << " Minus " << nummer2 << " ergibt gleich " << ergebnis << '\n';
            break;
        case '*':
            ergebnis = nummer1 * nummer2;
            std::cout << nummer1 << " multipliziert mit " << nummer2 << " ergibt gleich " << ergebnis << '\n';
            break;
        case '/':
            ergebnis = nummer1 / nummer2;
            std::cout << nummer1 << " geteilt durch " << nummer2 << " ergibt gleich " << ergebnis << '\n';
            break;
        default:
            std::cout << "Bitte gib nur mathematische Operatoren (+, -, *, /) ein.";
            break;
    }

    std::cout << "####################################";
    
    return 0;
}