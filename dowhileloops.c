#include <stdio.h>

//DO WHILE LOOPS
//fuehren einen bestimmten Bereich des Programmes zumindest einmalig aus und sollange ein festgelegter Umstand zutrifft fortlaufend.

int main()
{
    int Nummer = 0;
    int Summe = 0;

    do{
        printf("Bitte gib eine Zahl ueber Null ein.\n");
        scanf("%d", &Nummer);
        if(Nummer > 0)
        {
            Summe += Nummer;
        }
    }while(Nummer > 0);

    printf("Die Summe betraegt %d", Summe);

    return 0;
}