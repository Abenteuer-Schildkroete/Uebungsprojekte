#include <stdio.h>

//FUNKTIONEN
//Eine Funktion kann außerhalb der "main"-Funktion definiert und innerhalb beliebig oft aufgerufen werden.

void Geburtstagslied()
{
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday lieber USERNAME!\n");
    printf("Happy birthday to you!\n\n");
}

int main()
{
    Geburtstagslied();
    Geburtstagslied();
    Geburtstagslied();

    return 0;
}