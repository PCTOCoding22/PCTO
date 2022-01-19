#include <stdio.h>

int main() //inizio
{
    int x;
    int y;
    printf("inserisci un numero x : ");
    scanf("%d",&x);
    printf("inserisci un secondo numero y : ");
    scanf("%d",&y);
if(x % y != 0)
{
    printf("x non è multiplo\n");
}

else
{
    printf("è multiplo\n");
}



    return(0); //END
}