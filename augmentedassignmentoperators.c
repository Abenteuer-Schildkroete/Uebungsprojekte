#include <stdio.h>

int main()
{
    //AUGMENTED ASSIGNMENT OPERATORS
    //Augmented assignment operators werden dazu verwendet, eine durch einen Operator als Argument verwendete Variable, zu verändern.
    
    int x = 5;
    
    //x = x + 1;
    //x++;

    //x = x - 1;
    //x--;

    //x = x * 2;
    //x*=2;

    //x = x / 2;
    //x/=2;

    //x = x % 3;
    x%=3;


    printf("%d", x);

    return 0;
}