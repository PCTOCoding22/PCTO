#include <stdio.h>

int main()
{

int x;
printf("inserisci un numero");
scanf ("%d", &x);

if(x<0)
{
    printf ("ERRORE!");

    return(0);
}

for (int y=2;y<x;y++)
{
    if(x%y==0)
    
    {
        printf ("non è un numero primo\n");

        return(0);
    }
   
}

printf ("è un numero primo\n");


return(0);
}