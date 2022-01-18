#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, n3;
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &n3);
    if  (abs(n2 - n1) == abs(n3 - n2)) {
        printf("È una successione.\n");
    }
    else {
        printf("Non è una successione.\n");
}
    return 0;
}