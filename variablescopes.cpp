#include <iostream>

//SCOPE
//Variablen koennen "local", also innerhalb einer Funktion, oder "global", also außerhalb aller Funktionen, deklariert werden.

int MeineZahl = 10;                         // Meine Zahl als globale Variable außerhalb aller Funktion. Globale Variablen sollten wenn möglich auf Grund von Konflikten vermieden werden.

void ZeigeMirMeineZahlLocal(int MeineZahl)
{
    std::cout << MeineZahl << '\n';
}

void ZeigeMirMeineZahlLocal2()
{
    int MeineZahl = 5;                      // Meine Zahl als locale Variable innerhalb der anderen Funktion.
    std::cout << MeineZahl << '\n';
}

void ZeigeMirMeineZahlGlobal()
{
    std::cout << MeineZahl << '\n';
}

int main()
{
    int MeineZahl = 1;                      // Meine Zahl als locale Variable innerhalb der Main-Funktion.

    std::cout << MeineZahl << '\n';         // Meine Zahl als locale Variable ausgelesen und wiedergegeben.
    ZeigeMirMeineZahlLocal(MeineZahl);      // Meine Zahl als locale Variable an eine andere Funktion übergeben und durch diese wiedergegeben.
    ZeigeMirMeineZahlLocal2();              // Meine Zahl als locale Variable aus einer andere Funktion ausgelesen und wiedergegeben.
    ZeigeMirMeineZahlGlobal();              // Meine Zahl als globale Variable ausgelesen und wiedergegeben.
    std::cout << ::MeineZahl << '\n';       // Meine Zahl mit dem "::"-Operator als globale Variable ausgelesen und wiedergegeben.

    return 0;
}
