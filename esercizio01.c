#include  <stdio.h>

int main() //inizio
{
    int x;
    int eta;

    printf("inserire eta: ");
    scanf("%d", &eta);
    
    x = 18;
    if (eta >= x)
    {
        printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }

    return(0); //END
}