#include <stdio.h>
int main()
{
    int year;
    printf("Inserisci l'anno: ");
    scanf("%d", &year);
    if (!(year % 4) && year%100){
        printf("È bisestile.\n");
    }
    else if (!(year%400)){
        printf("È bisestile\n");
    }
    else {
        printf("Non bisestile\n");
    }
    return 0;
    }
// || !(year % 400)