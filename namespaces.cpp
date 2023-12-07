#include <iostream>

//NAMESPACES
//Ein "namespace" erlaubt es mehrere variablen mit dem selben namen aber unterschiedlichem Inhalt zu erzeugen,
//da die Variablen im "namespace" gehalten und diesem zugewiesen werden.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace std; //Mit "using" lässt sich ein angelegter "namespace" anwenden.

    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n'; //Ebenfalls lässt sich durch einen Prefix die Variable eines bestimmten "namespace" ausgeben.
    std::cout << second::x << '\n';
    
    return 0;
}