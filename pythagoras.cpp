#include <iostream>
#include <cmath>

//SATZ DES PYTHAGORAS

int main(){

    double a;
    double b;
    double c;

    std::cout << "Laenge der Ankathete in cm?";
    std::cin >> a;

    std::cout << "Laenge der Gegenkathete in cm?";
    std::cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Die Hypotenuse ist " << c  << " cm lang." << '\n';

    return 0;
}