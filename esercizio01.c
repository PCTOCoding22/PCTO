#include <stdio.h>

int main() //INIZIO
{
    int numero;

    printf("inserisci la tua età: ");
    scanf("%d", &numero);
    

    
    if (numero >= 18)
    {
        printf("la risposta è: si\n");
    }
    else
    {
          printf("la risposta è no\n");
    }
    return(0); // END
}