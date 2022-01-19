#include <stdio.h>
int main()
{
    float temperatura;
    printf("Inserisci la temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura > -273.15){
        float t_k = temperatura + 273.15;
        float t_f = (1.8)*temperatura + 32;
        printf("La temperatura in Kelvin è %f, mentre la temperatura in Fahrenheit è %f\n", t_k, t_f);
    }
    else{
        printf("Errore: zero Kelvin\n");
    }
    return 0;
    }