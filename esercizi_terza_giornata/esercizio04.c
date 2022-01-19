#include <stdio.h>

int main() {

    int c, f, k;
    printf("inserisci temperatura in celsius:");
    scanf("%d", &c);

    f = (1.8) * c + 32;
    k = c + 273.15;

     if(c <= -273.15) {
        printf("errore");
    }
    else {
        printf(" conversione in fahrenheit: %d\n", f);
        printf("conversione in kelvin: %d\n", k);
    }
    

    return 0;


}