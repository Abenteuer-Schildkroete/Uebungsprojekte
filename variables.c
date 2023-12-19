#include <stdio.h>

int main()
{
   //VARIABLES
   //Variablen sind Platzhalter die einen Wert halten und wiedergeben koennen.
   //Die Variable kann im Code nun an Stelle eines Wertes verwendet werden und seinen Wert dynamisch veraendern.
   //Hierfuer muss lediglich der Typ des zu speichernden Wertes deklariert werden. (int, char, float...)

    int x; //deklarieren
    x = 1; //initialisieren

    int y = 2; //Variablen koennen auch innerhalb einer Zeile deklariert und initialisiert werden um Platz zu sparen.

    int alter = 34; //Ganze Zahlen (integer)
    float dezimal = 4.99; //Dezimalzahlen (floating point number)
    char initiale = 'S'; //Einzelbuchstaben (character)
    char name[] = "Sebastian"; //Buchstabenfolge aus Einzelbuchstaben (array of characters)

    printf("Mein Name ist %s.\n",name);
    printf("Meine Initiale ist %c.\n",initiale);
    printf("Der Wert meiner Dezimalzahl ist %f.\n",dezimal);
    printf("Ich bin %d Jahtre alt.\n",alter);
    

    return 0;
}