#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci il primo numero:");
    scanf("%d", &x);
    printf("inserisci il secondo numero:");
    scanf("%d", &y);

    if (x % y == 0)
    {
        printf("si, il primo numero è un multiplo del secondo\n");  
    }

    else
    {
        printf("no, il primo numero non è multiplo del secondo\n");
    }

    return (0);
}
