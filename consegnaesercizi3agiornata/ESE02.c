#include <stdio.h>

int main()
{
    int x;
    printf("inserisci età maggiore nel tuo stato di provenienza: ");
    scanf("%d", &x);
    int y;
    printf("inserisci età: ");
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