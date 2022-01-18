#include <stdio.h>

int main() //inizio
{
int eta;
printf("inserisci l'età");
scanf("%d", &eta);

if (eta >= 18)
{
    printf("età %d maggiorenne\n", eta);

}

else 
{
    printf( "eta %d minorenne\n", eta);
}
    return(0);
}