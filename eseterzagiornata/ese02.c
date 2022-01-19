#include <stdio.h>

int main ()
{
    int x;
    printf("inserisci maggiore eta nel tuo stato: ");
    scanf("%d", &x);
    int y;
    printf("inserisci eta: ");
    scanf("%d", &y);
    if (y >= x)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }
    return 0;
 }