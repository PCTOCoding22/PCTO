#include <stdio.h>

int main() {

    int x;
    int y;
    int z;

    printf("Inserisci il primo lato: ");
    scanf("%d", &x);

    printf("Inserisci il secondo lato: ");
    scanf("%d", &y);

    printf("Inserisci il terzo lato: ");
    scanf("%d", &z);

    if (x + y > z && y + z > x && x + z > y) {
        if (x==y && y==z && z==x) {
            printf("Il triangolo è equilatero\n");
        } else if (x==y || y==z || x==z) {
            printf("Il triangolo è isoscele\n");
        } else {
            printf("Il triangolo è scaleno\n");
        }
    } else {
        printf("Questi lati non possono formare un triangolo\n");
    }


    return 0;
}