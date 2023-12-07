#include <iostream>

    /*
    Das "const" Stichwort legt eine Vaiable
    als Konstante fest. Die Variable kann dadurch
    nicht veraendert oder ueberschrieben werden.
    */
   
int main(){

   const double pi = 3.14159; // Da PI eine Zahl ist die sich nicht ändern lassen soll wird hier "const" verwendet.
   double radius = 10;
   double circumference = 2 * pi * radius;

   std::cout << circumference << " cm";
   
   return 0;
}