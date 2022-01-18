#include <stdio.h>

int main() //inizio
{
   int x;
   printf("inserisci un'età: ");
   scanf("%d",&x);
   if(x >= 18)
   {
       printf("sei maggiorenne\n");
   }
   else 
   {
       printf("sei minorenne\n");
   }

   
    return(0); //END
}