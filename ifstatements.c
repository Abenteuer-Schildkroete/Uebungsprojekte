#include <stdio.h>

int main()
{
    int Alter;

    printf("Gib dein Alter ein.\n");
    scanf("%d", &Alter);

    if(Alter >= 18)
    {
        printf("Zutritt gewaehrt, du bist alt genug!");
    }
    else if(Alter < 0)
    {
        printf("Du bist noch nicht geboren worden!");
    }
    else
    {
        printf("Zutritt verweigert, du bist nicht alt genug!");
    }

    return 0;
}