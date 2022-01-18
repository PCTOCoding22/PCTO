#include <stdio.h>

int main() //INIZIO
{
    int eta;
    printf("inserisci età: ");
    scanf("%d" , &eta);
   
     if ( eta >= 18 )
       {
           printf("maggiore età\n");
       }
      else
   {
       printf("non maggiorenne");
   }
    return(0); //END
}