#include <iostream>34

//IF STATEMENTS
//"if statements" erlauben es etwas zu tun oder nicht zu tun abhängig von einer Kondition.

int main(){

    int age;

    std::cout << "Wie alt bist du?";
    std:: cin >> age;
    
    if(age >= 100){
        std::cout << "Du bist zu alt, Zutritt verweigert.";
    }
    else if(age >= 18){
        std::cout << "Willkommen, Zutritt gestattet.";
    }
    else if(age < 0){
        std::cout << "Du wurdest noch nicht geboren.";
    }
    else{
        std::cout << "Du bist nicht alt genug, Zutritt verweigert.";
    }

    return 0;
}