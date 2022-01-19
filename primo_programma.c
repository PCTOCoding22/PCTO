#include <stdio.h>

int aggiungi_numero(int n)
{
    return n += 1;
}


int main()
{
    int numero;
    scanf("%d", &numero);
    printf("Il mio numero è %d\n", aggiungi_numero(numero));
    return(1);
}
