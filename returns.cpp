#include <iostream>

//RETURNS
//Returns geben einen Wert an den Punkt zurück an dem die zugehoerige Funktion abgerufen wurde

double Quadrat(double Laenge)
{
    double ErgebnisQ = Laenge * Laenge;
    return ErgebnisQ;                    //beide Zeilen können auch zusammengefasst werden (return Laenge * Laenge;)

}

double Wuerfel(double Laenge)
{
    double ErgebnisW = Laenge * Laenge * Laenge;
    return ErgebnisW;                    //beide Zeilen können auch zusammengefasst werden (return Laenge * Laenge * Laenge;)

}

int main()
{
    double Laenge;

    std::cout << "Gib die Kantenlaenge deines Quadrates/Wuerfels in cm ein. ";
    std::cin >> Laenge;

    double Flaeche = Quadrat(Laenge);
    double Volumen = Wuerfel(Laenge);

    std::cout << "Dein Quadrat hat eine Flaeche von " << Flaeche <<  " cm^2.\n";
    std::cout << "Dein Wuerfel hat ein Volumen von " << Volumen <<  " cm^3.\n";

    return 0;
}