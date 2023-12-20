#include <stdio.h>
#include <math.h>

int main()
{
    //MATH FUNCTIONS

    double a = sqrt(9);     //Wurzel aus 9
    double b = pow(2, 4);   //2 hoch 4 (2x2x2x2)
    int c = round(3.14);    //runden (auf/ab)
    int d = ceil(3.14);     //aufrunden
    int e = floor(3.99);    //abrunden
    double f = fabs(-100);  //absoluter Wert
    double g = log(3);      //Logarithmus
    double h = sin(45);     //Sinus
    double i = cos(45);     //Cosinus
    double j = tan(45);     //Tangens
    
    printf("\n%lf", a);
    printf("\n%lf", b);
    printf("\n%d", c);
    printf("\n%d", d);
    printf("\n%d", e);
    printf("\n%lf", f);
    printf("\n%lf", g);
    printf("\n%lf", h);
    printf("\n%lf", i);
    printf("\n%lf", j);

    return 0;
}