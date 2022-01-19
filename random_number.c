#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int numero_vite = 10;

    printf("-----------Inserisci un numero-----------\n");


    printf("------------------------------Euro: %d---\n", numero_vite);

    int numero_inserito;
    int numero_casuale = rand() % 10 + 1;

    

    
    
    while( numero_vite > 0)
    {
        int numero_casuale = rand() % 10 + 1;
        
        scanf("%d", &numero_inserito );
        printf("Il numero è: (%d)\n", numero_casuale);
    

    if (numero_inserito == numero_casuale)
    {
        numero_vite += 5;
        
        printf("Bravo %d è uguale a %d!\n", numero_inserito, numero_casuale);
        printf("Hai vinto ben 3 euro\n");
        printf("------------------------------Euro: %d---\n", numero_vite);
    }
    else{
        numero_vite += -1;
        printf("Mi dispiace ma %d non è uguale a %d :((\n", numero_inserito, numero_casuale);
        printf("Hai perso solo 1 euro\n\n");
        printf("------------------------------Euro: %d---\n", numero_vite);
    }
    }
    
    
      printf("Hai esaurito i soldi\n");
    

    

    
    
    
    }