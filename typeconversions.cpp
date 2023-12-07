#include <iostream>

//TYPE CONVERSIONS
//Eine "type conversion" erlaubt es eine Variable in einen anderen Variabletyp umzuwandeln.
//Eine "type conversion" kann Implicit (automatisch) oder Explicit (manuell) erfolgen.

int main(){

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << '\n';

    return 0;
}