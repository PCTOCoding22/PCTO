#include<stdio.h>


int main()
{
    int x,y;
    char z;
    int risultato_addizione;
    int risultato_sottrazione;
    int risultato_moltiplicazione;
    int risultato_divisione;
    char add  = '+';
    char sott = '-';
    char mult = '*';
    char div  = '/';

    printf("Benvenutx nella calcolatrice, ora scrivi il calcolo che vuoi fare, inserisci il primo numero: ");
    scanf("%d", &x);
    printf("inserisci un operatore: ");
    scanf("\n%c", &z);
    printf("inserisci un altro numero: ");
    scanf("%d", &y);

    if( z == '+')
    {
        risultato_addizione = x + y;
        printf("%d + %d = %d\n\n" , x, y, risultato_addizione);
    }
    else
    { 
        if (z == '-')
        {
            risultato_sottrazione = x -y;
            printf("%d - %d = %d\n\n" , x, y , risultato_sottrazione);
        
        }
        else
        {
            if( z == '*') 
            {
                risultato_moltiplicazione = x * y;
                printf("%d * %d = %d\n\n", x , y ,  risultato_moltiplicazione);
            }
            else
            {
                if(z == '/')
                {
                    risultato_divisione = x / y;
                     printf("%d / %d = %d\n\n", x , y, risultato_divisione);

                }

            }

        }

        }



  return 0;


}