#include <stdio.h>
#include <string.h>

//STRING FUNCTIONS

int main()
{
    char Vorname[] = "Franz";
    char Nachname[] = "Mustermann";

    //strlwr(Vorname);                              //Konvertiert einen String in einen String aus Kleinbuchstaben.
    strupr(Vorname);                              //Konvertiert einen String in einen String aus Großbuchstaben.
    //strcat(Vorname, Nachname);                    //Fuegt den Inhalt von String2 am ende von String1 ein.
    //strncat(Vorname, Nachname, 1);                //Fuegt eine gewuenschte Zahl von Zeichen aus dem Inhalt von String2 am ende von String1 ein.
    //strcpy(Vorname, Nachname);                    //Kopiert den Inhalt von String2 in dem String1.
    //strncpy(Vorname, Nachname, 1);                //Kopiert eine gewuenschte Zahl von Zeichen aus dem Inhalt von String2 in dem String1.

    //strset(Vorname, '?');                         //Ersaetzt den Inhalt von String1 mit einem bestimmten Zeichen.
    //strnset(Vorname, '?', 1);                     //Ersaetzt eine gewuenschte Zahl von Zeichen aus dem Inhalt von String1 mit einem bestimmten Zeichen.
    //strrev(Vorname);                              //Kehrt String1 um.

    int Ergebnis = strlen(Vorname);               //Gibt die Laenge eines Strings als Zahl zurück.
    //int Ergebnis = strcmp(Vorname, Nachname);     //Vergleicht die gesamte Laenge zweier Strings und gibt die Zahl 0 zurück falls diese identisch sind.
    //int Ergebnis = strncmp(Vorname, Nachname, 3); //Vergleicht die gesamte Laenge zweier Strings und gibt deren Differenz als Zahl zurück.

    printf("%s\n", Vorname);
    printf("%d\n", Ergebnis);

    return 0;
}