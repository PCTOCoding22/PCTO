#include <stdio.h>

int main ()
{
    int x, y;
    char a;
    int risultato;
    printf("Inserisci la tua operazione: \n");
    scanf("%d %c %d", &x, &a, &y);
    
    if (a == '+')
    {
        risultato = x + y;
        printf("La tua somma è: %d\n", risultato);
    }
    if (a == '-')
        {
        risultato = x - y;
        printf("La tua sottrazione è: %d\n", risultato);
        }
    if (a == '*')
        {
        risultato = x * y;
        printf("La tua moltiplicazione è: %d\n", risultato);
        }
    if(a == '/')
        {
            if(y == 0)
            {
                printf("Here we go monkey...");
            }
            else
            {
                risultato = x / y;
                printf("La tua divisione è: %d\n", risultato);
            }
        }
    return(0);
}