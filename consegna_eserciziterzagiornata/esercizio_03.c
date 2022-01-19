#include <stdio.h>

int main()
{
    int x;
    printf("inserisci il primo numero");
    scanf("%d", &x);

    int y;
    printf ("inserisci il secondo numero");
    scanf ("%d", &y);

    if (x%y==0)
    {
        printf ("il primo numero è multiplo del secomdo");
    }

    else 
    {
        printf ("il primo numero non è un multiplo del secondo");


    }

    return (0);
}