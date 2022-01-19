#include <stdio.h>

int main() //INIZIO
{
    int x;
    int y;

    printf("inserisci un numero");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x % y == 0)
    {
        printf("x è multiplo di y");
    }
    else
    {
        printf("x non è multiplo di y");
    }
    return 0; //END
}