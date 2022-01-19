#include <stdio.h>

int main()
{
    int x;
    printf("inserisci il tuo numero\n");
    scanf("%d", &x);

    for(int y = 2; y < x/2; y = y +1) //y = 2 perchè dobbiamo  controllare tutti i numeri da 2 in poi
    {
        if(x % y == 0)
        {
            printf("questo non è un numero primo!\n");
            return (0);
        }
    }
    printf("questo è un numero primo!\n");

    return(0);
}