#include <iostream>

//TYPEDEFS
//Ein "typedef" erlaubt es einen neuen Identifikator festzulegen,
//der "typedef" funktioniert als neues Alias und hilft bei der Lesbarkeit und Fehlerfreiheit.

typedef std::string text_t;
typedef int number_i;
using text_t = std::string; //Es kann auch "using" verwendet werden um einen neuen Identifikator festzulegen was geeigneter für Tamplates ist.
using number_i = int; //Heutzutage is "using" aus diesem Grund verbreiteter.

int main(){

    text_t name = "Sebastian";
    number_i age = 34;

    std::cout << name << '\n';
    std::cout << age << '\n';

    return 0;
}