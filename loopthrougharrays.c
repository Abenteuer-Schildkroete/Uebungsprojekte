#include <stdio.h>

int main()
{
    double Preise[] = {1.49, 4.99, 9.99, 19.95, 99.99};

//  printf("%d bytes\n", sizeof(Preise[0]));

    for(int i = 0; i < sizeof(Preise)/sizeof(Preise[0]); i++)
    {
        printf("%.2lf$\n", Preise[i]);
    }

    return 0;
}