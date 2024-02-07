#include <stdio.h>
#include <string.h>

//ARRAYS OF STRINGS
//sind Arrays in denen Strings gespeichert werden.
//Nachteil ist das Werte nicht direkt deklariert werden können. Dies kann jedoch durch die Stringkopierfunktion umgangen werden.

int main()
{
    char Fahrzeug[10][10] = {"Audi","BMW","Ford","Mercedes","Opel","VW","Honda"};

    //Fahrzeug[7] = "Tesla";
    strcpy(Fahrzeug[7], "Tesla");

    for(int i = 0; i < sizeof(Fahrzeug)/sizeof(Fahrzeug[0]); i++)
    {
        printf("%s\n", Fahrzeug[i]);
    }

    return 0;
}