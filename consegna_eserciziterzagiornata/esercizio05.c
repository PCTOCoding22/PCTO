#include <stdio.h>

int main()
{
    int x;
    printf("inserisci il primo numero");
    scanf ("%d", &x);

    int y;
    printf ("inserisci il secondo numero");
    scanf ("%d", &y);

    int z;
    printf ("inserisci il terzo numero");
    scanf ("%d", &z);

    if (x-y==y-z)
    {
        printf ("i numeri sono in progressione aritmetica"\n);
    }

    else 
    {
        printf ("i numeri non sono in progressione aritmetca"\n);
    }

    return (0);
}