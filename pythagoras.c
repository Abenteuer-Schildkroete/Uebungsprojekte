#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;

    printf("\nGib die Laenge von \"A\" ein.");
    scanf("%lf", &A);

    printf("\nGib die Laenge von \"B\" ein.");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    printf("\nDie Laenge von C betraegt: %lf", C);

    return 0;
}