#include <stdio.h>

int main()
{
    int x;
    printf ("inserisci l'anno");
    scanf ("%d", &x);

    if ((x%4==0 && x%100!=0)|| x%400==0);
    {
        printf ("l'anno è bisestile");
    }

    return(0);
}