#include <stdio.h>

int main() {

    float temperatura;
    float tempInFahrenheit;
    float tempInKelvin;

    printf("Inserisci una temperatura in Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < -273.15) {
        printf("La temperatura inserita è minore dello zero assoluto");
    } else {
        tempInFahrenheit = (1.8 * temperatura) + 32;
        tempInKelvin = temperatura + 273.15;
        printf("Temperatura in Fahrenheit: %f\n", tempInFahrenheit);
        printf("Temperatura in Kelvin: %f\n", tempInKelvin);
    }

    return 0;
}