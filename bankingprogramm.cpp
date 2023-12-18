#include <iostream>
#include <iomanip>

void zeigeKontostand(double Kontostand)
{
    std::cout << "Dein aktueller Kontostand betraegt:\n" << std::setprecision(2) << std::fixed << Kontostand << " $\n";
};
double einzahlen()
{
    double Betrag = 0;
    
    std::cout << "Welcher Betrag soll eingezahlt werden?\n";
    std::cin >> Betrag;
    
    if(Betrag > 0)
    {
        return Betrag;
    }
    else
    {
        std::cout << "Der eingegebene Betrag ist ungueltig.\n";
        return 0;
    }   
};
double auszahlen(double Kontostand)
{
    double Betrag = 0;
    
    std::cout << "Welcher Betrag soll ausgezahlt werden?\n";
    std::cin >> Betrag;
    
    if(Betrag > Kontostand)
    {
        std::cout << "Leider reicht Ihr Guthaben fuer diese Auszahlung nicht aus.\n";
        return 0;
    }
    else if(Betrag < 0)
    {
        std::cout << "Der eingegebene Betrag ist ungueltig.\n";
        return 0;
    }
    else
    {
        return Betrag;
    }
};

int main()
{
    double Kontostand = 0;
    int Auswahl = 0;
                            //Um Programmfehler bei ungewünschten Nutzereingaben zu verhindern sollte der Input-Buffer geleert werden.
    std::cin.clear();       //"std::cin.clear()" setzt alle fehlermeldungen bezueglich der Interpretation von Nutzereigaben zurück.
    fflush(stdin);          //"fflush()" leert den Input-Buffer und verhindert die Uebernahme von Werten aus früheren Eingaben. 

    do{
    std::cout << "#########################\n";
    std::cout << "Bitte triff eine Auswahl.\n";
    std::cout << "1. Kontostand anzeigen.\n";
    std::cout << "2. Geld einzahlen.\n";
    std::cout << "3. Geld auszahlen.\n";
    std::cout << "4. Beenden.\n";
    std::cout << "#########################\n";

    std::cin >> Auswahl;

    switch(Auswahl)
    {
        case 1: zeigeKontostand(Kontostand);
            break;
        case 2: Kontostand += einzahlen();
                zeigeKontostand(Kontostand);
            break;
        case 3: Kontostand -= auszahlen(Kontostand);
                zeigeKontostand(Kontostand);
            break;
        case 4: std::cout << "Danke fuer Ihren Besuch. Auf Wiedersehen.\n";
            break;
        default: std::cout << "Ungueltige Auswahl. Bitte treffen Sie eine Auswahl zwischen 1 und 4.\n";
    }

    }while(Auswahl != 4);

    return 0;
}
