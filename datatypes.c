#include <stdio.h>
#include <stdbool.h>

int main()
{
    //DATATYPES

    char a = 'X';                   //Einzelbuchstabe (%c)
    char b[] = "XXXXX";             //Array aus Buchstaben (%s)

    float c = 3.141592;             //4 bytes (32bit-Praezision) 6-7 Stellen (%f)
    double d = 3.141592653589793;   //8 bytes (64bit-Praezision) 15-16 Stellen (%lf)

    bool e = true;                  //1 byte Wahr oder Falsch (%d)

    char f = 100;   	            //1 byte -128 bis +127 (%d um die Zahl darzustellen und %c für die ASCII-Buchstabenrepresentation)
    unsigned char g = 250;          //1 byte 0 bis +255 (%d um die Zahl darzustellen und %c für die ASCII-Buchstabenrepresentation wobei werte über +127 auf 0 (Null) zurückgesetz werden)

    short int h = 12345;            //2 bytes -32768 bis +32767 (%d)
    unsigned short int i = 12345;   //2 bytes 0 bis +65535 (%d)

    int j = 123456789;              //4 bytes -2147483648 bis +2147483647 (%d)
    unsigned int k = 987654321;     //4 bytes 0 bis +4294967295 (%u)

    long long int l = 1234567891011121314;              //8 bytes -9 quintillion bis +9 quintillion (%lld)
    unsigned long long int m = 1413121110987654321U;     //8 bytes 0 bis +18 quintillion (%llu)

    printf("%c\n", a);      //character
    printf("%s\n", b);      //character array
    printf("%f\n", c);      //float
    printf("%lf\n", d);     //double
    printf("%d\n", e);      //boolean
    printf("%c\n", f);      //ASCII character
    printf("%d\n", g);      //unsigned character Zahlenwert
    printf("%d\n", h);      //short
    printf("%d\n", i);      //unsigned short
    printf("%d\n", j);      //integer
    printf("%u\n", k);      //unsigned integer
    printf("%lld\n", l);    //long integer
    printf("%llu\n", m);    //unsigned long integer

    return 0;
}