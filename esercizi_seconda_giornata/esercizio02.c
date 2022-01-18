#include <stdio.h>
int main()
{
    int age_license, age;
    printf("Inserisci l'età alla quale è possibile prendere la patente: ");
    scanf("%d", &age_license);
    printf("Inserisci la tua età: ");
    scanf("%d", &age);
    if  (age >= age_license) {
        printf("Puoi prendere la patente.\n");
    }
    else {
        printf("Non puoi prendere la patente.\n");
}
    return 0;
}