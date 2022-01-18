#include <stdio.h>

int main() { //INIZIO
    int numero;

    printf("Inserisci età:");
    scanf("%d" , &numero);

    if(numero>= 18)
    {
        printf("Sei maggiorenne :)\n");

    }
    else 
    {
        printf("Sei minorenne :(\n");
    }
    return(0); //END 
}