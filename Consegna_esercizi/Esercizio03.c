#include <stdio.h>

int main()
{
 int numero;
 int numero2;

 printf ("inserisci numero:  ");
 scanf ("%d", &numero);
 
 printf ("inserisci numero2:  ");
 scanf ("%d", &numero2);

  if (numero % numero2 == 0 && numero >= numero2)
    {
        printf ("Sono multipli!");
    }
    else
    {
        printf ("NON sono multipli");
    }
 
 return(0);
}
