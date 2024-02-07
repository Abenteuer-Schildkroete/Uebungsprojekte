#include <stdio.h>
#include <string.h>

//SWAPS
//Eine Möglichkeit Variablen miteinaneder auszutauschen ist durch das Zwischenspeichern des einen Wertes.

int main()
{
    /*
    char X = 'X';
    char Y = 'Y';
    char TEMP;

    TEMP = X;
    X = Y;
    Y = TEMP;
    */

    char X[10] = "Wasser";
    char Y[10] = "Limonade";
    char TEMP[10];

    strcpy(TEMP, X);
    strcpy(X, Y);
    strcpy(Y, TEMP);

    printf("X = %s\n", X);
    printf("Y = %s\n", Y);

    return 0;
}