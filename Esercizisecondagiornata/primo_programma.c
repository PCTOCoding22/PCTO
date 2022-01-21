#include <stdio.h>

int aggiungi_numero(int numero)   //funzione aggiungi numero alla variabile numero
{ 
    numero = numero + 1;
    return(numero);
}

int main ()
{
    int numero;                       // variabili
    int risultato_aumentato;  
    
    printf("Inserisci un numero: ");  //ti stampa di inserire un numero
    scanf("%d", &numero);             //sta fermo fino a che non metti il numero
    
    risultato_aumentato = aggiungi_numero(numero);   //gli dico di applicare la funzione +1 alla variabile "risultato_aumentato"

 printf("il mio numero è: %d\n",risultato_aumentato);  //finisce la prima parte dove aumenta il numero

 int contatore =0;                        //inserisco la variabile contatore
  while(contatore < risultato_aumentato)  //dichiaro che il codice deve funzionare finchè (.....)
  { 
      if(contatore % 2==0)                //SE il numero è pari (ha modulo 0) allora stampalo (sennò no e salti ad aggiungi un numero)
      { 
     printf("Numero: %d\n", contatore);      //stampa un valore del contatore
      }
      else                                //SE INVECE il numero non è pari 
      { 
          printf("Numero %d dispari\n",contatore);   //stampa è dispari
      }
     contatore= aggiungi_numero (contatore);  //aggiungi 1 al precedente valore 
  }                                           //loop fino a che non finiscono i valori < del risultato aumentato che ho messo all'inizio

 return(0);
}

