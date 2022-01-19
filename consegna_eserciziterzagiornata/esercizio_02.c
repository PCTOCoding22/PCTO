#include <stdio.h>

int main()

  { 
       int x;
       x>=0;
   printf ("inserisci età in cui si può prendere la patente");
   scanf("%d", &x);

int y;
y>=0;
printf("inserisci la tua età");
scanf ("%d", &y);

if (y>=x)
{
    printf ("puoi prendere la patente :)");
}

else 
{
    printf("non puoi prendere la patente:(");
}

if (x<0, y<0)

{
    printf ("ERRORE!")

    return(0)
}

return(0);
}