#include <iostream>
#include <cmath>

//MATH FUNCTIONS

int main(){

    double x = 3.2;
    double y = 4.1;
    double z;

    //z = std::max(x, y); //"std::max" vergleicht zwei Variablen und ermittelt den maximalen Wert
    //z = std::min(x, y); //"std::min" vergleicht zwei Variablen und ermittelt den minimalen Wert
    //z = pow(2, 4); //"pow()" erlaubt es einen Exponent festzulegen 
    //z = sqrt(9); //"sqrt()" erlaubt es die Wurzel einer Variable auszugeben
    //z = abs(-3); //"abs()" erlaubt es den abstand einer Variable zu null auszugeben
    //z = round(x); //"round()" erlaubt es eine Variable zu auf- bzw. abzurunden
    //z = ceil(x); //"ceil()" erlaubt es eine Variable stets aufzurunden
    z = floor(x); //"floor()" erlaubt es eine Variable stets abzurunden

    //https://www.cplusplus.com/reference/cmath/

    std::cout << z << '\n';

    return 0;
}