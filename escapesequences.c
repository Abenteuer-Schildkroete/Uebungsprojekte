#include <stdio.h>

int main()
{
    //Dies ist ein Kommentar!

    /*
    Dies
    ist
    ein
    mehrere
    Zeilen
    langer
    Kommentar!
    */

   //ESCAPE SEQUENCE
   //Escape Sequenzen sind Symbolkombinationen aus einem Backslash und einem Buchstaben.
   //Diese Symbolkombination spezifiziert die Aktion die am ende einer Zeile oder eines Strings ausgeführt werden soll.
   //z.B.: "\n" = Neue Zeile   oder   "\t" = Tab

    printf("Mein\nName\nist\nSebastian.\n");
    printf("\n");
    printf("1\t2\t3\t4\t5\n");
    printf("\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\n");
    printf("\"Lernen ist Erfahrung. Alles andere ist einfach nur Information.\" - Albert Einstein");
    
    return 0;
}