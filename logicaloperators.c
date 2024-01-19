#include <stdio.h>
#include <stdbool.h>

//LOGICAL OPERATORS
// && (UND) ueberprueft ob zwei Konditionen war sind.
// || (ODER) ueberprueft ob eine von zwei Konditionen war ist.
// ! (NOT) ueberprueft ob eine Konditionen nicht war ist.

int main()
{
    float Temperatur = 22;
    bool Bewoelkt = false;

    if(Temperatur >= 20 && Temperatur <= 25)
    {
        printf("Es ist genau richtig temperiert.\n");
    }
    else if(Temperatur >= 25 || Temperatur <= 20)
    {
        printf("Es ist nicht angenehm temperiert.\n");
    }
    else
    {
        printf("Fehler!\n");
    }

    if(!Bewoelkt)
    {
        printf("Die Sonne scheint.\n");
    }
    else
    {
        printf("Es ist bewoelkt.\n");
    }

    return 0;
}