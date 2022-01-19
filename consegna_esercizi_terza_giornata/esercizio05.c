#include <stdio.h>

int main() {

    int x;
    int y;
    int z;

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &z);

    if (y-x == z-y) {
        printf("I 3 numeri sono in progressione aritmetica\n");
    } else {
        printf("I 3 numeri non sono in progressione aritmetica\n");
    }

 

    return 0;
}