#include <stdio.h>

int main()
{
    //FORMAT SPECIFIERS (%)
    //Format specifier spezifizieren das Format bzw. den Typ der Daten die dargestellt/angezeigt werden sollen.

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    //%.1 = dezimale Praezision
    //%1 = minimale Feldbreite
    //%- = linksorientiert (Default = rechtsorientiert)

    float Ware1 = 4.99;
    float Ware2 = 9.99;
    float Ware3 = 89.99;

    printf("Ware 1: %-8.2f$\n", Ware1);
    printf("Ware 2: %-8.2f$\n", Ware2);
    printf("Ware 3: %-8.2f$\n", Ware3);

    return 0;
}