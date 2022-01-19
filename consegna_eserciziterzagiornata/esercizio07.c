#include <stdio.h>

int main()
{
    int x;
    printf ("inserire lunghezza primo lato");
    scanf ("%d", &x);

    int y;
    printf ("inserire lunghezza secondo lato");
    scanf ("%d", &y);

    int z;
    printf ("inserire lunghezza terzo lato");
    scanf ("%d", &z);

   
    
    if (x+y>z||x+z>y||y+z>x)
    {
        printf ("possono essere lunghezze di un triangolo");
    }

    else 
    {
        printf ("non possono essere lunghezze di un triangolo");
    }

    return(0);
}