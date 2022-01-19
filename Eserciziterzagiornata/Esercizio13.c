#include <stdio.h>

    int main()
    {
        int x;
         printf("scrivi un numero\n");
         scanf("%d", &x);

         for(int y= 2; y < x; y++)   //(condizione iniziale) (condizione che deve essere sempre verificata, sennò si esce dal loop) (azione da fare alla fine del processo)
         {
            if(x % y == 0)
            {
              printf("il numero non è primo\n");
              return 0;
            }
        }
        printf("è un numero primo\n");
         
     return 0;
    }



