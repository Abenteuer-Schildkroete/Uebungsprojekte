#include <stdio.h>
#include <string.h>

int main()
{
    //USER INPUTS
    
    char name[12];
    int alter;

    printf("Wie lautet dein Name?");
    //scanf("%s", &name);           //simpler String ohne Spaces und Widespaces. 
    fgets(name, 12, stdin);         //Nutzereingaben mit Leerzeichen.
    name[strlen(name)-1] = '\0';    //Verhindert die Übernahme von "neue Zeile"-Operatoren beim pressen der Entertaste innerhalb der Nutzereingabe.

    printf("Wie alt bist du?");
    scanf("%d", &alter);

    
    printf("Hallo %s, ", name);
    printf("du bist %d Jahre alt.\n", alter);

    return 0;
}