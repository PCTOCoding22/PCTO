#include <stdio.h>

int main()
{
    int numero;
    int eta_minima;

    printf ("inserisci la tua eta:");
    scanf ("%d", &eta_minima);


    printf ("inserisci la eta necessaria per guidare nel proprio stato");
    scanf ("%d", &numero);

    if (eta_minima > numero)
    {
      printf  ("puoi guidare finio a che non esaurisci l'anima");
    }
    else
    {
       printf ("non puoi guidare e ti attacchi alla bici");
    }

    return(0);

}



