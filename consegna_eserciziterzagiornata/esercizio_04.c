#include <stdio.h>

int main()
{
    int x;

    printf ("inserisci una temperatura in celsius");
    scanf ("%d", &x);

    if (x<=-273.15)
    {
        printf ("ERRORE!");

        return (0);
    }

    
    float y=(x*9/5)+32;
    
    float z=x+273.15;

    printf("Fahrenheit:%f Kelvin:%f\n", y,z);


return(0);
}