#include <stdio.h>

//CONTINUE = Ueberspringt den Rest des Programmteiles und erzwingt den naechsten Schritt innerhalb einer Schleife.
//BREAK = Beendet bzw. verlaesst eine Schleife.

int main()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue;
        }

        if(i == 16)
        {
            break;
        }
        
        printf("%d\n", i);
    }

    return 0;
}