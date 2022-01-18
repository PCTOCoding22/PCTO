#include <stdio.h>
#include <stdlib.h>
int main()
{
    int L1, L2, L3;
    printf("Inserisci il primo lato: ");
    scanf("%d", &L1);
    printf("Inserisci il secondo lato: ");
    scanf("%d", &L2);
    printf("Inserisci il terzo lato: ");
    scanf("%d", &L3);
    if  (L1 == L2 && L2 == L3 && L1 == L3) {
        printf("Triangolo equilatero.\n");
    }
    else if (L1 == L2 || L2 == L3 || L1 == L3){
        printf("Triangolo isoscele.\n");
    }
    else{
        printf("Triangolo scaleno.\n");
    }
    return 0;
}