#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("Il primo numero è maggiore del secondo\n");
    } else
    {
        printf("Il secondo numero è maggiore del primo \n");
    }

    return(0);
}