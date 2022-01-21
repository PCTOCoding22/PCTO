#include <stdio.h>

int main ()
{
 int primo_numero;
 int secondo_numero;
 int risultato;
 char operazione;

 printf ("primo numero:  ");
 scanf ("%d", &primo_numero);
 printf ("operazione:  ");
 scanf ("\n%c", &operazione);
 printf ("secondo numero:  ");
 scanf ("%d", &secondo_numero);

 if (operazione == '+')
 {
     risultato = primo_numero + secondo_numero;
 }
 else if (operazione == '-')
 {
     risultato = primo_numero - secondo_numero;
 }
 else if (operazione == '*')
 {
     risultato = primo_numero * secondo_numero;
 }
 else if (operazione == '/')
 {
     if (secondo_numero == 0)
     {
         printf ("error");
         return (0);
     }
     risultato = primo_numero / secondo_numero;
 }

  printf ("%d, %c, %d = %d\n", primo_numero, operazione, secondo_numero, risultato);
  return (0);
}
