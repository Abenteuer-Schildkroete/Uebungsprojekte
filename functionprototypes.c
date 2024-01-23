#include <stdio.h>

//FUNCTION PROTOTYPES
//sind deklarierte Funktionen ohne Funktioneskoerper vor der Hauptfunktion. 
//Es muss sichergestellt werden das Abfragen mit den richtigen Argumenten gemacht werden.

void Hallo(char[], int);

int main()
{
    char Name[] = "Sebastian";
    int Alter = 34;

    Hallo(Name, Alter);

    return 0;
}

void Hallo(char Name[], int Alter)
{
   printf("Hallo %s,", Name);
   printf(" du bist %d Jahre alt.\n", Alter);
}
