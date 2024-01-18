#include <stdio.h>
#include <ctype.h>

int main()
{
    float Temperatur;
    char Einheit;

    printf("In welche Einheit moechtes du umrechnen?\nCelsius (C/c) oder Fahrenheit (F/f):\n");
    scanf("%c", &Einheit);

    Einheit = toupper(Einheit);

    if(Einheit == 'C')
    {
        printf("Gib die Temperatur in Fahrenheit ein.\n");
        scanf("%f", &Temperatur);
        Temperatur = ((Temperatur - 32) * 5) / 9;
        printf("Die Temperatur betraegt %.1f Celsius.\n", Temperatur);
    }
    else if(Einheit == 'F')
    {
        printf("Gib die Temperatur in Celsius ein.\n");
        scanf("%f", &Temperatur);
        Temperatur = (Temperatur * 9 / 5) + 32;
        printf("Die Temperatur betraegt %.1f Fahrenheit.\n", Temperatur);
    }
    else
    {
        printf("Keine zulaessige Temperatureinheit!\nBitte gib nur die Einheiten Celsius (C/c) oder Fahrenheit (F/f) ein.\n");
    }

    return 0;
}