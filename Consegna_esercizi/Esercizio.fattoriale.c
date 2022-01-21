#include <stdio.h>

int recursive_power (int numero, int potenza)
{
    int res;

    if (potenza <= 1)
    {
        return (numero * 1);
    }
    res = numero * recursive_power (numero, potenza - 1);
    return (res);
}

int main ()
{
    int numero;
    int potenza;

    printf ("numero:  ");
    scanf ("%i", &numero);

    printf ("potenza:  ");
    scanf ("%i", &potenza);

    int res;
    res = recursive_power (numero, potenza);

    printf ("risultato : %d\n", res);
    return (0);
}