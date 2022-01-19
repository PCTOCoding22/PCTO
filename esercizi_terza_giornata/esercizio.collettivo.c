#include <stdio.h>

int main ()

{

    int x;
    printf("scrivi un numero: ");
    scanf("%d", &x);

    int contatore = x - 1;

    while(contatore > 1) {

        if(x % contatore != 0) {

            contatore = contatore - 1;
                                                        
                                                    
        }
        else {

            printf("il numero non è primo \n");

            return 0;

        }

    }

    printf("il numero è primo \n");

    return 0;

}