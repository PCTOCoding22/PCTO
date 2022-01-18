#include <stdio.h>
int aggiungi_uno(int numero)
{
    numero = numero + 1;
    return(numero);
}
int main() //START
{
    int numero;
    int risultato_aumentato;
    
    printf("Inserisci un numero: ");

    scanf("%d", &numero);
    
    risultato_aumentato = aggiungi_uno(numero);

    printf("Il tuo numero più 1 fa : %d\n", risultato_aumentato);
    
    int contatore = 0;
    while(contatore <= risultato_aumentato)
    {
        if (contatore % 2 == 0)
        {
        printf("Numero %d pari\n", contatore);
        }
        else 
        {
            printf("Numero %d dispari\n", contatore);
        }
        
        contatore = aggiungi_uno(contatore);
    }
    return(0); //END
}