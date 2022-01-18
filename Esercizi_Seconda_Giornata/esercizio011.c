#include <stdio.h>


int main()
{
    int numero;

    printf("inserisci la tua età: ");
    scanf("%d", &numero);

    while(numero < 0)
    {
        printf("non posso fare miracoli, plus fara è un down\n");
        printf("rifallo o ti sbunno imbecille... Ora dimmi la tua età\n");
        scanf("%d", &numero);
    }

    if (numero >= 18)
{
    printf("la risposta è: si, sei maggiorenne\n");
}
    
    else 
{
    printf(" la risposta è: no, non sei maggiorenne stupido bufu\n");
}
    return(0);
}
