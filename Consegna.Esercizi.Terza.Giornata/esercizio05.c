#include <stdio.h>

int main()

{
    int x;
    int y;
    int z;

    printf("Inserisci il primo numero:\n");

    scanf("%d", &x);

    printf("Inserisci il secondo numero:\n");

    scanf("%d", &y);

    printf("Inserisci il terzo numero:\n");

    scanf("%d", &z);  



    if (z - y == y - x)
    {
        printf("I tre numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("I tre numeri non sono in progressione aritmetica\n");
    }

    return (0);
}