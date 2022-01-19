#include <stdio.h>

int main()
{
    int x, y;
 printf("Inserisci un numero: ");
    scanf("%d", &x);
 printf("Inserisci un altro numero: ");
    scanf("%d", &y);

    if(x % y == 0){
        printf("x è un multiplo di y\n");
    
    }
    else{
        printf("x NON è un multiplo di y\n");
    }
   
  return(0);
}