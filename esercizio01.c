#include <stdio.h>

int main ()//inizio

{
    int eta;
    printf("inserisci un età: ");
    scanf("%d", &eta);
    

    if(eta >= 18)
    {
         printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    } 


    return(0);//end
}