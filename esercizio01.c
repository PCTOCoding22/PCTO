#include <stdio.h>

int main() //inizio
{
   int y;
   printf("inserisci eta: ");
   scanf("%d", &y);
   if (y>= 18)
   {
       printf("sei maggiorenne\n");
   } 
   else 
   { 
       printf("sei minorenne\n");
    };
   
    

    return(0); //END
}