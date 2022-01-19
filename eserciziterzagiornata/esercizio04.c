#include <stdio.h>

int main() //inizio
{
    
    float x;
    float y = - 273.15;
    printf("inserisci una temperatura x : ");
    scanf("%f",&x);

    if(x < y)
    {
        printf("è segnalato un errore ");
        return 0;
    } 

    float F = (9/5) * x + 32;
    printf("la temperatura in F è: %f\n", F);
    float K = x + 273.15;
    printf("la temperatura in K é: %f\n", K);

    

    return(0); //END

}