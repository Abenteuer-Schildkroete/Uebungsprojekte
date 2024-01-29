#include <stdio.h>
#include <string.h>

//WHILE LOOPS
//wiederholen einen bestimmten Bereich des Programmes sollange ein festgelegter Umstand zutrifft.
//Unter Umstaenden wird ein Whileloop ueberhauptnicht ausgefuehrt.

int main()
{
    char Name[25];

    printf("Wie lautet dein Name?\n");
    fgets(Name, 25, stdin);
    Name[strlen(Name) - 1] = '\0';

    while(strlen(Name) == 0)
    {
        printf("Du hast deinen Namen nicht eingegeben.\n");
        printf("Wie lautet dein Name?\n");
        fgets(Name, 25, stdin);
        Name[strlen(Name) - 1] = '\0';
    }

    printf("Hallo %s", Name);

    return 0;
}