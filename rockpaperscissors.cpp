#include <iostream>
#include <ctime>

char Spielerauswahl()
{
    char Spieler;
    std::cout << "_______________________________________\n";
    std::cout << "        Schere - Stein - Papier        \n";
    std::cout << "_______________________________________\n";

    do{
    std::cout << "Triff eine Auswahl:\n";
    std::cout << "Gib S/s fuer Schere ein.\n";
    std::cout << "Gib R/r fuer Stein ein.\n";
    std::cout << "Gib P/p fuer Papier ein.\n";
    std::cin >> Spieler;
    }while(Spieler != 'S' && Spieler != 'R' && Spieler != 'P' && Spieler != 's' && Spieler != 'r' && Spieler != 'p');

    return Spieler;
}

char Computerauswahl()
{
    srand(time(0));
    int Zahl = rand() % 3 + 1;

    switch(Zahl)
    {
        case 1: return 'p';
        case 2: return 'r';
        case 3: return 's';
    }

    return 0;
}

void zeigeAuswahl(char Auswahl)
{
    switch(Auswahl)
    {
        case 'S': std::cout << "Schere";
            break;
        case 's': std::cout << "Schere";
            break;
        case 'R': std::cout << "Stein";
            break;
        case 'r': std::cout << "Stein";
            break;
        case 'P': std::cout << "Papier";
            break;
        case 'p': std::cout << "Papier";
            break;

    }
}

void ermittleSieger(char Spieler, char Computer)
{
    switch(Spieler)
    {
        case 'S': if(Computer == 's')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 'r')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;
        case 's': if(Computer == 's')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 'r')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;

        case 'R': if(Computer == 'r')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 'p')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;
        case 'r': if(Computer == 'r')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 'p')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;
            
        case 'P': if(Computer == 'p')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 's')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;
        case 'p': if(Computer == 'p')
                {
                    std::cout << "Unentschieden!\n";
                }
                else if(Computer == 's')
                {
                    std::cout << "Du hast Verloren!\n";
                }
                else{
                    std::cout << "Du hast Gewonnen!\n";
                }
            break;
    }
}

int main()
{
    char Spieler;
    char Computer;

    Spieler = Spielerauswahl();
    std::cout << "Du waehlst ";
    zeigeAuswahl(Spieler);
    std::cout << ".\n";

    Computer = Computerauswahl();
    std::cout << "Der Computer waehlt ";
    zeigeAuswahl(Computer);
    std::cout << ".\n";

    ermittleSieger(Spieler, Computer);

    return 0;
}
