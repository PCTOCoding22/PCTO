#include <stdio.h>

int main()
{
    int x;

    printf("inserisci il tuo numero: ");
    scanf("%d", &x);
    
    int count = x - 1;

    while (count > 1)
    {
        if (x  % count != 0 ){
            count --;
        }
        else{
            printf("questo non e un numero primo");

            return(0);
        }
              
        

    }
    printf("il numero e primo");

    return (0);

}