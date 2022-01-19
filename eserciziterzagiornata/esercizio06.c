#include <stdio.h>

int main() //inizio
{
    int x;
    printf("inserisci un anno: ");
    scanf("%d",&x);

    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        printf(" è un anno bisestile\n");
    }

    else
    {
        printf("non è bisestile\n");
    }

    

      return(0); //END

}