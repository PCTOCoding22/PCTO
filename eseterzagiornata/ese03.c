#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un numero: ");
    scanf("%d", &x);
    int y;
    printf("inserisci il secondo numero: ");
    scanf("%d", &y);
    if (!(x%y))
    {
        printf("x multiplo di y");
    }
    else
    {
        printf("x non è multiplo di y");
    }
    return 0;
    }