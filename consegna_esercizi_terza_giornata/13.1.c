#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci il tuo numero per verificare se è un numero primo:\n");
    scanf("%d", &x);
    int count=x;
    while(count>1)
    {
        if(numero % count !=0);
        {
            count = count - 1;
        }
        else
        {
            printf("Questo non è un numero primo\n");
            return(0);
        }
    }
    printf("questo è un numero primo\n");
    return(0);
}