#include <stdio.h>

int main()
{
    printf("Benvenuto nel convertitore di temperature ;D\n\n");

    printf("Inserisci temperatura in Celsius:\n");
    printf("o--");

    
    float temperaturaC;

    scanf("%f", &temperaturaC);

    float temperaturaF = ((1.8) * temperaturaC) + 32;
    float temperaturaK = temperaturaC + 273.15;

    

    if (temperaturaC < 0)
    {
        printf("Errore: Temperatura inserita minore dello zero assoluto.\n");
    }
    else
    {
        printf("La tua temperatura in Fahrenheit è %f°F.\n\nLa tua temperatura in Kelvin è %f°K.\n\n", temperaturaF, temperaturaK);
    }
    
}