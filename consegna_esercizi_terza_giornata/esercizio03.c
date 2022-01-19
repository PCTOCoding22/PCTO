#include <stdio.h>

int main() {

    int numero1;
    int numero2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci un altro numero: ");
    scanf("%d", &numero2);

    if (numero1 % numero2 == 0) {
        printf("Il primo numero è multiplo del secondo\n");
    } else {
        printf("Il primo numero non è multiplo del secondo\n");
    }

    return 0;
}