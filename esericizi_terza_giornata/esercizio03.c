#include <stdio.h>

int main()
{
    int numero1;
    int numero2;

    printf("-------Inserisci due numeri: \n\n");
    printf("Numero 1: ");

    scanf("%d", &numero1);

    printf("Numero 2: ");
    scanf("%d", &numero2);

    if( numero1 % numero2 == 0)
    {
        printf("%d è multiplo di %d\n\n", numero1, numero2);
    }
    else
    {
        printf("%d non è multiplo di %d\n\n", numero1 ,numero2);
    }

 return 0;
}