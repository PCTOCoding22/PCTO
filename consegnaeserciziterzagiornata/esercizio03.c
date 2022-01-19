#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci numero:");
    scanf("%d", &x);
    printf("inserisci il secondo numero:");
    scanf("%d", &y);

    if (x % y == 0)
    {
        printf("il primo numero è un multiplo del secondo");
    }
    else
    {
        printf("il primo numero noè multiplo del secondo");
    }

    return(0);
}