#include <stdio.h>

int aggiungi_uno (int numero)
{
    numero = numero + 1;
    return(numero);
}

int main() //inizio
{
    int numero; // integer si utilizza per indicare le variabili di numeri interi
    int risultato_aumentato;
    printf("Inserisci un numero");
    scanf("%d", &numero); //mette in pausa il programma finche non diamo al programma setsso un numero
    // %d è una flag per indicare dove scrivere il numero

    risultato_aumentato = aggiungi_uno(numero); 
    printf("il mio numero è: %d\n", risultato_aumentato);
    int contatore = 0;
    while(contatore <= risultato_aumentato)

    {
        if(contatore % 2 == 0)
        {
            printf("Numero %d peni\n", contatore); // 
        }
        else
        {
            printf("Numero %d dispari\n", contatore); // \n
        }

        contatore = aggiungi_uno(contatore);
    }
    return(0); //End
}

//int funzione()
//int aggiungi_uno(int numero)
//{
//    numero = numero + 1;
// return(numero);
//}