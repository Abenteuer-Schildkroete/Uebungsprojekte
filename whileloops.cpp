#include <iostream>
#include <string>

int main()
{
   std::string Name;

   while(Name.empty())  //eine "while"-Schleife erlaubt es code auszuführen sollange ein Umstand zutrifft.  
   {
        std::cout << "Bitte gib deinen Namen ein. ";
        std::getline(std::cin, Name);
   }
/*
   while(1==1)
   {
        std::cout << "Hilfe, ich bin in einer Endlosschleife gefangen! \n";
   }
*/
   std::cout << "Hallo " << Name;

    return 0;
}