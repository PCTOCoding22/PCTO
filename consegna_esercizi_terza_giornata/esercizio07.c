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
        printf("Questi lati possono formare un triangolo\n");
    } else {
        printf("Questi lati non possono formare un triangolo\n");
    }

    return 0;
}