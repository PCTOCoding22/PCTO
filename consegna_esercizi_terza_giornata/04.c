#include <stdio.h>

int main()
{
    float temperatura_utente;
    float temperatura_Fahrenheit;
    float temperatura_Kelvin;
    printf("Inserisci la tua temperatura in CELSIUS:  ");
    scanf("%f", &temperatura_utente);
    if(temperatura_utente < -273.15)
    {
        printf("ERRORE, Inserisci la tua temperatura in CELSIUS:  ");
        scanf("%f", &temperatura_utente);
    }
    else
    {
        temperatura_Kelvin = temperatura_utente + 273.15;
        temperatura_Fahrenheit = temperatura_utente * 9/5 + 32;
        printf("La tua temperatura equivale a %f Kelvin e a %f Fahrenheit\n", temperatura_Kelvin, temperatura_Fahrenheit);
    }

        return(0);
}