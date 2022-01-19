#include <stdio.h>

int main()
{
    int eta;

    printf("Inserisci la tua età: ");
    scanf("%d", &eta);

    if (eta >= 18)
    {
        printf("L'utente è maggiorenne\n");
    } else
    {
        printf("L'utente è minorenne\n");
    }

    return(0);

}




