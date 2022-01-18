#include <stdio.h>

int main() //inizio
{
 int y;
 printf("inserisci eta: ");
  scanf("%d", &y);
  if (y >= 18)
  {
      printf("utente maggiorenne\n");
  } else
  {
      printf("utente minorenne\n");
  }

    return(0);//END
}