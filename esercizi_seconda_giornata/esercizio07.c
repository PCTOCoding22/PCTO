#include <stdio.h>
#include <stdlib.h>
int main()
{
    int L1, L2, L3;
    printf("Inserisci il primo numero: ");
    scanf("%d", &L1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &L2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &L3);
    if  (L2 + L3 > L1 && L1 + L3 > L2 && L1 + L2 > L3) {
        printf("Possono essere lati di un triangolo.\n");
    }
    else {
        printf("Non possono essere lati di un triangolo.\n");
}
    return 0;
}