#include <stdio.h>

int main()
{
    int eta;
    int eta_stato;

    printf (" inserisci la tua età:");
    scanf ("%d", &eta);

    if (eta > 0)
    {
        printf("inserisci l'età necessaria nel tuo stato per poter guidare:");
        scanf("%d", &eta_stato);
        if (eta < eta_stato)
        {
            printf(" No, non puoi prendere la patente nello stato in cui ti trovi attualmente... Per fortuna\n");
        }
        
        else 
        {
            printf("Si, puoi prendere la patente nello stato in cui ti trovi attualmente.. Ma non schiantarti per favore\n");
        }
    }
    
    else 
    
    {
        printf("So che sei stupido ma credo in te..");
        printf("ora inserisci la tua vera età:\n");
        scanf("%d", &eta);
    }

    if (eta < eta_stato)
        {
            printf(" No, non puoi prendere la patente nello stato in cui ti trovi attualmente... Per fortuna\n");
        }
        
        else 
        {
            printf("Si, puoi prendere la patente nello stato in cui ti trovi attualmente.. Ma non schiantarti per favore\n");
        }


    return (0);

}