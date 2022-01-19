#include <stdio.h>

int main() {

    printf("inserisci tre numeri:");

    int x, y, z;
    scanf("%d", &x);
    printf("-->");
    scanf("%d", &y);
    printf("-->");
    scanf("%d", &z);
    printf("-->");

    printf("\n\n\n");

    if(z % y == y % x) {

        printf("è una progressione aitmetica");
    }
    else {

        printf("non è una progressione aritmetica");
    }


    return 0;
}