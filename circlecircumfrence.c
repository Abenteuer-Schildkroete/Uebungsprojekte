#include <stdio.h>

int main()
{

    const double pi = 3.14159;
    double radius;
    double umfang;
    double flaeche;

    printf("\nGib den Radius deines Kreises ein.", radius);
    scanf("%lf", &radius);

    umfang = 2 * pi * radius;
    flaeche = pi * radius * radius;

    printf("\nDein Kreisumfang betraegt: %lf", umfang);
    printf("\nDeine Kreisflaeche betraegt: %lf", flaeche);

    return 0;
}