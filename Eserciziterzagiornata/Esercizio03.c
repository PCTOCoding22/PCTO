#include <stdio.h>

int main()
{  int x;
   int y;

   printf("Scrivi due numeri\n");
   scanf("%d", &x);
   scanf("%d", &y);

   if( x%y == 0)
   {
          printf("x è multiplo di y\n");
   }
   else { 
    printf("x non è multiplo di y\n");
   }

}

