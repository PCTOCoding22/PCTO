#include <stdio.h>

int main(){

    int x;
    int y;

    printf("A quanti anni si può prendere la patente nel tuo paese?\n");
    scanf("%d", &x);

    printf("Quanti anni hai?\n");
    scanf("%d", &y);

    if (y < 0)
    {
        printf("\033[0;31mERRORE\n");

        return 0;
    }

     if (x < y)
     {
         printf("Puoi prendere la patente\n");
     }

     else{
         printf("Non puoi prendere la patente\n");
     }
     return 0;
}