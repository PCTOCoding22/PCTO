#include <stdio.h>

int main()
{
    int requiredAge;
    int age;

    printf("A quanti anni puoi prendere la patente?: ");
    scanf("%d", &requiredAge);

    printf("Quanti anni hai?: ");
    scanf("%d", &age);

    if (age <= 0) {
        printf("Non puoi inserire un età negativa\n");
        return 0;
    } else if (requiredAge - age <= 0) {
        printf("L'utente può prendere la patente\n");
    } else {
        printf("L'utente non può prendere la patente\n");
    }


    return(0);
}