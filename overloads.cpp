#include <iostream>
#include <string>

void PizzaBacken()
{
    std::cout << "Hier ist deine Pizza Margherita.\n";
};
void PizzaBacken(std::string PizzaBelag1)
{
    std::cout << "Hier ist deine " << PizzaBelag1 << "-Pizza.\n";
};
void PizzaBacken(std::string PizzaBelag1, std::string PizzaBelag2)
{
    std::cout << "Hier ist deine Pizza mit " << PizzaBelag1 << " und " << PizzaBelag2 << ".\n";
};

int main()
{
    PizzaBacken();
    PizzaBacken("Salami");
    PizzaBacken("Tunfisch", "Zwiebeln");
    return 0;
}