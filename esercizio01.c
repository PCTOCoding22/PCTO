#include <stdio.h>

int main()
{
    int eta;
 printf("Inserisci la tua età");
    scanf("%d", &eta);
    while(eta<0){
        printf("Età non valida, inserire la tua età reale");
        scanf("%d", &eta);
    }
    if(eta >= 18){
        printf("Sei maggiorenne\n");
    }
    else{
        printf("Sei minorenne\n");
    }


    return(0);
}