#include <iostream>

//TERNARY OPERATOR
//Ein "ternary operator" (?:) kann an Stelle eines "if/else"-statments verwendet werden.
//expression1 : expression2;

int main(){

    //int Punkte = 75;
    //Punkte >= 60 ? std::cout << "Bestanden!" : std:cout << "Durchgefallen!";

    //int Nummer = 9;
    //Nummer % 2 ? std::cout << "Ungerade!" : std::cout << "Grade!";

    bool hungrig = true;
    hungrig ? std::cout << "Du bist hungrig." : std::cout << "Du bist satt.";

    return 0;
}