#include <stdio.h>

int main()

{
   int x;
   printf("scrivi un numero: ");
   scanf("%d", &x);
  int cont;
  cont = x-1 ;
   while(cont >1)
   {
       if(x % cont != 0) {
           cont --;
       }
       else 
        {
           printf("il numero non è primo");
           return 0 ;
       }
    }
    printf("il numero è primo");

 return 0;
}