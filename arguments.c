#include <stdio.h>

//ARGUMENTS
//Mit Argumenten können Variablen aus der Hauptfunktion an eine Benutzerdefinierte Funktion außerhalb der Hauptfunktion übergeben
//und so innerhalb dieser verwendet werden.

void Geburtstagsgruß(char Name[], int Alter)
{
    printf("Alles Gute zum Geburtstag lieber %s.\n", Name);
    printf("Du bist %d Jahre alt.\n", Alter);
}

int main()
{
    char Name[] = "Sebastian";
    int Alter = 34;
    Geburtstagsgruß(Name, Alter);

    return 0;
}