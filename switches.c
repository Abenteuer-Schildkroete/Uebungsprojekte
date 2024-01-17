#include <stdio.h>

// SWITCHES
// Switches oder auch Schalter sind eine effizientere alternative zur Nutzung von "else if"-Statments und
// erlauben es den Wert einer Variablen mit dem Wert mehrerer Fallbeispiele zu vergleichen.

int main()
{
    int Note;

    printf("Gib deine Schulnote ein.\n");
    scanf("%d", &Note);

    switch(Note)
    {
        case (1):
            printf("Sehr gut gemacht!\n");
            break;
        case (2):
            printf("Gut gemacht!\n");
            break;
        case (3):
            printf("Deine Leistung war befriedigend!\n");
            break;
        case (4):
            printf("Deine Leistung war ausreichend!\n");
            break;
        case (5):
            printf("Deine Leistung war mangelhaft!\n");
            break;
        case (6):
            printf("Deine Leistung war ungenuegend!\n");
            break;
        default:
            printf("Deine eingegebene Schulnote muss zwischen 1 und 6 liegen.\n");
    }

    return 0;
}