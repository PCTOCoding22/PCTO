#include <stdio.h>

int main()
{   
  float x;
  char operator;
  float y;
  char uguale;
  float res;

  printf("Inserisci operazione\n");
  scanf("%f\n",&x);
  scanf("%c",&operator);
  scanf("%f",&y);
  scanf("%c\n", &uguale);

    if(operator == '+')
    {
         res= x+y;
          printf("%f",res);
    }
    if(operator =='-')
    {
        res= x-y;
        printf("%f",res);
    }
    if(operator=='x')
     {
         res= x*y;
         printf("%f",res);
     }
    if(operator==':')
     {
         if (y==0){
             printf("Error\n");
             return 0;
         }
         res=x/y;
         /*if(x%y !=0)
         { 
             float resto;
             resto= x%y;
             printf("con resto\n");
         }*/
         printf("%f",res);
     }
     //printf("%f %c %f = %d\n",x, operator, y , uguale, res);
 }





  
   
