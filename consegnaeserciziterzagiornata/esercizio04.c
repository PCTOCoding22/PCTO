#include <stdio.h>

int main()
{
    int x;
    int temperatura_desiderata;
    float y = 273.15;

    printf("inserisci la temperatura in Celsius da convertire:  ");
    scanf("%d", &x);

    if(x + y < 0)
    {
        printf("ERRORE");
    }
    else
    {
        printf("il risultato in Kelvin è: %f\n", x + y);
        printf("in Fahrenheit risulta: %d\n", (9 * x)/5 + 32);
    }

    return(0);

}   
     