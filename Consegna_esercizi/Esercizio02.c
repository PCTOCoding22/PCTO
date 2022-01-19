#include <stdio.h>

int main()
{
  int numero;
  int anni_patente;
  
  printf("inserisci anni_patente:  ");
  scanf("%d", &anni_patente);
 
  printf("inserisci numero:  ");
  scanf("%d", &numero);

  if (numero > 0 && anni_patente > 0)
   {
     if(numero < anni_patente)
       {
         printf ("negato\n");
       }
    else
       {
         printf ("patente per te!\n");
       }
   }
  else
   {
      printf ("errore\n");
   }

   return(0);
}