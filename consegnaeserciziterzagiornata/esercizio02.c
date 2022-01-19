#include <stdio.h>

int main() {
    int x;

    printf("inserisci ò'età in cui puoi prendere la patente nella tua nazione:");
    scanf("%d", &x);
    
    int y;

    printf("inserisci la tua età:");
    scanf("%d", &y);
    if(x > y){
        printf("continua a farti dare i passaggi\n");
    }
    else{
        printf("sbrigati a prendere la patente che mi serve un passaggio \n");
    }
    return 0;

}