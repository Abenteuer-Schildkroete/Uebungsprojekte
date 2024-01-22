#include <stdio.h>

//TERNARY OPERATORS
//bilden eine Alternative zu IF/ELSE-Statements und geben einen zugewiesenen Wert zurück.

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int max = findMax(3, 4);
    printf("%d", max);

    return 0;
}