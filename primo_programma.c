#include <stdio.h>

int aggiungi_uno(int numero)
{
    numero = numero + 1;
    return(numero);
}

int main() //INIZIO
{
    int numero;
    int risultato_aumentato;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    risultato_aumentato = aggiungi_uno(numero);


printf("il mio numero è:%d", risultato_aumentato);

int contatore = 0;
while(contatore <= risultato_aumentato)
{
    if(contatore % 2 == 0)
    {
        printf("numero%d\n" , contatore);
    }
        else
    {
    printf("numero %d dispari\n", contatore);
    }
    contatore = aggiungi_uno(contatore);
}
return(0); //END
}