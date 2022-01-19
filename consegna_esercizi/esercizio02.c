#include <stdio.h>
int main()
{
    int ep;
    int eta;
 printf("Inserisci la tua età: ");
    scanf("%d", &eta);
    
    while(eta<0){
        printf("Età non valida, inserire la tua età reale: ");
        scanf("%d", &eta);
    }
    printf("Inserisci l'età necessaria per la patente nello Stato in cui vivi: ");
    scanf("%d", &ep);
    while(ep<0){
        printf("Età non valida, inserire nuovamente l'età necessaria per la patente nello Stato in cui vivi: ");
        scanf("%d", &eta);
    }
    if(eta >= ep){
        if(eta > 170){
        printf("Sei Umano? Comunque puoi prendere la patente\n");
        }
        else{
        printf("Puoi prendere la patente\n");
        }
    }
    else{
        printf("NON puoi prendere la patente\n");
    }
   


    return(0);

}