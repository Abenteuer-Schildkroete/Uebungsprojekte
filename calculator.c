#include <stdio.h>

int main()
{
    char Operator;
    double Nummer1;
    double Nummer2;
    double Ergebnis;

    printf("Gib einen Operator ein (+ - * /).\n");
    scanf("%c", &Operator);

    printf("Gib Nummer 1 ein.\n");
    scanf("%lf", &Nummer1);
    
    printf("Gib Nummer 2 ein.\n");
    scanf("%lf", &Nummer2);

    switch(Operator)
    {
        case '+':
            Ergebnis = Nummer1 + Nummer2;
            printf("Ergebnis: %lf\n", Ergebnis);
            break;
        case '-':
            Ergebnis = Nummer1 - Nummer2;
            printf("Ergebnis: %lf\n", Ergebnis);
            break;
        case '*':
            Ergebnis = Nummer1 * Nummer2;
            printf("Ergebnis: %lf\n", Ergebnis);
            break;
        case '/':
            Ergebnis = Nummer1 / Nummer2;
            printf("Ergebnis: %lf\n", Ergebnis);
            break;
        default:
            printf("Dieser Operator is nicht zulaessig!\nBitte gib einen gueltigen Operator ein (+ - * /).\n");
    }

    return 0;
}