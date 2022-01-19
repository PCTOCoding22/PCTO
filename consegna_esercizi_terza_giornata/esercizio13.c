#include <stdio.h>

int main() {

    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int count = n - 1;

    while (count > 1) {
        if (n % count != 0) {
                    count--;
        } else {
                
                printf("Il numero non è primo\n");
                return 0;
            }
    }

    printf("Il numero è primo\n");

    return 0;
}
