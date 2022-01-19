#include <stdio.h>

int main()
{
    float temperatura, K, F;
 printf("Inserisci una temperatura in Celsius: ");
    scanf("%f", &temperatura);
    while(temperatura < -273.15){
        printf("Temperatura non valida, inserire un'altra temperatura: ");
        scanf("%f", &temperatura);
    }
    K = temperatura + 273.15;
    F = 9 / 5 * temperatura + 32 ;
    printf("La temperatura inserita in Kelvin è uguale a %fK e in Fahrenheit è %fF\n", K,F );

    return(0);
}