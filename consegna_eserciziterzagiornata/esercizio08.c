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

    if (x<0||y<0||z<0)
    {
        printf ("ERRORE!");

        return(0);
    }

    if (x!=y&&x!=z&&y!=z)
    {
        printf ("il triangolo è scaleno");
    }
    if (x==y&&x==z&&y==z)
    {
        printf ("il triangolo è equilatero");

        return(0);
    }
    if (x==y||x==z||y==z);
    {
        printf ("il triangolo è isoscele");
    }

    return(0);
    
}