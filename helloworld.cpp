#include <iostream>

int main(){

    //Dies ist ein Komentar!
    
    /*
    Dies
    ist
    ein 
    mehrere
    Zeilen
    langer
    Komentar!
    */
    
    std::cout << "Hello world!" << '\n'; //An stelle von "'\n'" kann auch "std::endl" verwendet werden um eine neue Zeile zu beginnen.
    std::cout << "My name is Sebastian." << '\n'; //Das Verwenden von "std::endl" leert zusätzlich den Output-Buffer auf kosten der Leistung.
    
    return 0;
}