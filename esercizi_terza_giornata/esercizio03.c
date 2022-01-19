#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci x: ");
    scanf("%d", &x);
    printf("inserisci y: ");
    scanf("%d", &y);
    
    if(x % y == 0) {
        printf("y è un multiplo di x\n");
    }
    else {
        printf("y non è un multiplo di x\n");
    }

    return 0;
}