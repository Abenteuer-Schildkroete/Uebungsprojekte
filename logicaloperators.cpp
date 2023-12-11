#include <iostream>

//AND OR NOT
//"&&" mit "AND" (UND) lassen sich mehrere Variablen gemeinsam prüfen oder als Bedingung festlegen.
//"||" mit "OR" (ODER) lassen sich mehrere Variablen auf eine Übereinstimmung einer oder mehrerer Variablen prüfen.
//"!" mit "NOT" (NICHT) lässt sich eine Variable logisch als Ihr gegenteil Prüfen. (!true = false) (!false = true)

int main(){

    int Temperatur;
    bool sonnig = true;

    std::cout << "Gib die Temperatur ein.";
    std::cin >> Temperatur;
/*
    if(Temperatur > 0 && Temperatur < 30){
        std::cout << "Die Temperatur ist gut.";
    }
    else{
        std::cout << "Die Temperatur ist schlecht.";
    }
 */   
    if(Temperatur <= 0 || Temperatur >= 30){
        std::cout << "Die Temperatur ist schlecht.";
    }
    else{
        std::cout << "Die Temperatur ist gut.";
    }
/*
    if(sonnig){
        std::cout << "Die Sonne scheint.";
    
    }
    else{
        std::cout << "Es ist bewölkt.";
    }
*/
    if(!sonnig){
        std::cout << "Es ist bewölkt.";
    
    }
    else{
        std::cout << "Die Sonne scheint.";
    }

    return 0;
}