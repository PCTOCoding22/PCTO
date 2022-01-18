#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    if  (n1 > n2) {
        printf("Il primo numero è maggiore del secondo\n");
    }
    else {
        printf("Il primo numero è minore del secondo\n");
}
    return 0;
}