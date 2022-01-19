#include <stdio.h>
int main() {

    int numero;
    int lunghezza;

    float media;

    numero = 0;
    lunghezza = 0;


    while (1) {
        
        printf ("Inserisci un numero: ");
        scanf("%d",&numero);

        if (numero >= 0) {
           
           lunghezza++;

           if (lunghezza == 1) {

               media = numero / lunghezza;
               printf("La media è %f\n", media);

           } else {

               numero = numero + numero;
               printf("%d\n", numero);

               media = numero / lunghezza;

               printf("La media è %f\n", media);
           }

        }
    }
    
    return 0;
}