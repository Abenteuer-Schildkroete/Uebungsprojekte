#include <iostream>

int main()
{
    for(int index = 1; index <= 20; index++)
    {
        if(index == 13)
        {
            //break;    //Mit "break" kann aus einer Schleife ausgebrochen werden.
            continue;   //Mit "continue" kann der deklarierte Zaehlschritt uebersprungen werden.
        }
        std::cout << index << '\n';
    }

    std::cout << "Beispielaussage";

    return 0;
}