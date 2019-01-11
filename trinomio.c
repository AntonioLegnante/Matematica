//trinomio speciale date le soluzioni in input individuare se sono corrette
#include <stdio.h>
#include <stdbool.h>
int main () {
int b,c,sol1,sol2;
char Risposta[2];
bool Riprovare=true;
while (Riprovare==true) {
    printf ("inserisci il coefficiente b");
    scanf ("%d",&b);
    printf ("inserisci il coefficiente c");
    scanf ("%d",&c);
    printf ("inserisci la prima soluzione");
    scanf ("%d",&sol1);
    printf ("inserisci la seconda soluzione");
    scanf ("%d",&sol2);
    if (sol1 + sol2 == b && sol1 * sol2 == c) {
	printf ("le soluzione sono corrette");
        Riprovare=false;
    }
    else {
    printf ("le soluzioni sono errate, riprovare?");
    scanf ("%s",&Risposta);
    if (Risposta[0]== 'n')
        Riprovare=false;
    }
}
return 0;
}
         
       
    
    