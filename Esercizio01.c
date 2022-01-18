#include <stdio.h>

int main() //INIZIO
{
    int numero;
    char risposta;
     
    printf("inserisci Numero: ");
    scanf("%d", &numero);
     
    if(numero>17)
    {
        printf("Sei Maggiorenne\n");
    }
    else
    {
        printf("Sei Minorenne\n");
    }

    return(0); //END
}