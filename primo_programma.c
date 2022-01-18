#include <stdio.h>

int aggiungi_uno(int x)
{
    x = x + 1;
 return(x);
}
   
int main() //INIZIO
{
    int x;
    int y;
    printf("inserisci il numero: ");
    scanf("%d",&x);
    y = aggiungi_uno(x);
    printf("il mio numero aumentato di 1 è: %d\n", y);
    int z = 0;
    while(z <= y)
    {
        if(z % 2 == 0)
        {
              printf("Numero: %d\n", z);
        }
        else
        {
            printf("Numero %d dispari\n", z);
        }
        z = z + 1;
    }
    return(0); //END
}








