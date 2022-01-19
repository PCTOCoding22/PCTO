#include <stdio.h>

int main()
{
    int x;
    int temperatura_desiderata;
    float y = 273.15;

    printf("inserire la temperatura i CELSIUS da convertire:");
    scanf("%d", &x);

    if (x + y < 0)
    {
        printf("ERRORE");
    }
    else
    {
        printf("Il risultato in Kelvin è: %f\n", x + y);
        printf("e in Fahrenheit risulta: %d\n", (9 * x)/5 + 32);
    }

    return(0);


}
