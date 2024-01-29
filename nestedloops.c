#include <stdio.h>

//NESTED LOOPS
//fuehren eine Schleife innerhalb einer anderen Schleife aus.


int main()
{
    int Reihen;
    int Zeilen;
    char Symbol;

    printf("Bitte gib die Anzahl der Reihen ein.\n");
    scanf("%d", &Reihen);

    printf("Bitte gib die Anzahl der Zeilen ein.\n");
    scanf("%d", &Zeilen);

    scanf("%c");

    printf("Bitte gib das zu verwendende Symbol ein.\n");
    scanf("%c", &Symbol);

    for(int Index = 1; Index <= Reihen; Index++)
    {
        for(int InnererIndex = 1; InnererIndex <= Zeilen; InnererIndex++)
        {
            printf("%c", Symbol);
        }
        printf("\n");
    }

    return 0;
}