#include <stdio.h>

int main() {

    float num = 0;
    int i = 1;

    while(1) {
        
        printf("Inserisci un numero: ");

        float num2;

        scanf("%f", &num2);

        if (num2 > 0) {

            num = num + num2;

            float media = num/i;

            printf("La media è %f\n", media);

            i++;

        } else {

            printf("Hai inserito un numero minore di 0\n");
            return 0;
        }
    }
    return 0;
}

