#include <iostream>

int main(){

    int x; // Eine Variable deklarieren. Hier wird mit "int" (integer) eine Variable erzeugt die ganze Zahlen speichert.
    x = 5; // Einer Variable einen Inhalt zuweisen (in diesem Fall eine Zahl da unsere Variable eine ganze Zahl (integer) ist.)

    int y = 6; // Eine Variable kann auch innerhalb einer einzelnen Zeile deklariert und einem Inhalt zugewiesen werden.

    int summe = x + y; // Variablen können ihren Inhalt aus anderen Variablen zusamensetzen.

    //INTEGER
    // Die "int"-Variable hält ganze zahlen und kann zum Beispiel zum erstellen einer Alters- oder Jahresvariable verwendet werden.
    int age = 34;
    int year = 2023;
    int month = 12;
    int weekday = 7;

    //DOUBLE
    //Die "double"-Variable kann dezimale Zahlen halten und ermöglicht zum beispiel eine Preisvariable.
    double price = 4.99;
    double temperature = 25.1;

    //CHARACTER
    //Die "char"-Variable hält einen einzelnen Buchstaben und ermöglicht eine amerikanische Noten- oder eine Inizialenvariable.
    char grade = 'A';
    char initial = 'S';
    char currency = '$';

    //BOOLEAN
    //Die "bool"-Variable enthält ein Wahr- oder Falschstatement.
     bool student = true;
     bool power = true;
     bool onSale = false;

    //STRING
    //Die "string"-Variable ermöglicht das halten von ganzen Sätzen oder mehreren "char"-Variablen.
    std::string name = "Sebastian";
    std::string day = "Freitag";
    std::string food = "Pizza";
    std::string adress = "Musterstraße 123, 54321 Musterstadt";

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "x + y = " << summe << '\n';
    std::cout << "Alter: " << age << '\n';
    std::cout << "Jahr: " << year << '\n';
    std::cout << "Monat: " << month << '\n';
    std::cout << "Tag: " << weekday << '\n';
    std::cout << "Preis: " << price << '\n';
    std::cout << "Temperatur: " << temperature << '\n';
    std::cout << "Note: " << grade << '\n';
    std::cout << "Initiale: " << initial << '\n';
    std::cout << "Währung: " << currency << '\n';
    std::cout << "Hello " << name << "," << '\n';
    std::cout << "es ist " << day << "." << '\n';
    std::cout << "Dein Lieblingsessen ist " << food << " und" << '\n';
    std::cout << "deine Adresse lautet: " << '\n' << adress << '\n';

    return 0;
}