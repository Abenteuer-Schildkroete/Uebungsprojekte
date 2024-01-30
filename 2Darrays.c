#include <stdio.h>

//2D ARRAYS
//sind Arrays in denen jedes Element selbst ein Array ist. Nützlich für Tabellen oder Raster.

int main()
{
/*
    int Zahlen[3][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10}};

    int Zahlen[3][5] =  {
                        {1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10}
                        };
*/
    int Zahlen[3][5];

    int Reihen = sizeof(Zahlen)/sizeof(Zahlen[0]);
    int Zeilen = sizeof(Zahlen[0])/sizeof(Zahlen[0][0]);

    printf("%d Reihen\n", Reihen);
    printf("%d Zeilen\n", Zeilen);

    Zahlen[0][0] = 1;
    Zahlen[0][1] = 1;
    Zahlen[0][2] = 1;
    Zahlen[0][3] = 1;
    Zahlen[0][4] = 1;
    Zahlen[1][0] = 2;
    Zahlen[1][1] = 2;
    Zahlen[1][2] = 2;
    Zahlen[1][3] = 2;
    Zahlen[1][4] = 2;
    Zahlen[2][0] = 3;
    Zahlen[2][1] = 3;
    Zahlen[2][2] = 3;
    Zahlen[2][3] = 3;
    Zahlen[2][4] = 3;

    for(int i = 0; i < Reihen; i++)
    {
        for(int j = 0; j < Zeilen; j++)
        {
            printf("%d", Zahlen[i][j]);
        }
        printf("\n");
    }

    return 0;
}