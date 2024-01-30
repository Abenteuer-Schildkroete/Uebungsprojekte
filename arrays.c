#include <stdio.h>

//ARRAYS
//sind Dateistrukturen die eine Vielzahl von Werten des selben Dateityps speichern koennen.

int main()
{
    double Preise[] = {1.49, 4.99, 9.99, 19.95};

/*  
    double Preise[4];

    Preise[0] = 1.49;
    Preise[1] = 4.99;
    Preise[2] = 9.99;
    Preise[3] = 19.95;
*/

    printf("%.2lf$\n", Preise[0]);
    printf("%.2lf$\n", Preise[1]);
    printf("%.2lf$\n", Preise[2]);
    printf("%.2lf$\n", Preise[3]);

    return 0;
}