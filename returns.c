#include <stdio.h>

//RETURNS
//Returns geben einen bestimmten Wert an eine abfragende Funktion zurück.

double qdrt(double X)
{
    double Ergebnis = X * X;
    return Ergebnis;
}

int main()
{
    double X = qdrt(3.14);
    printf("%lf", X);

    return 0;
}