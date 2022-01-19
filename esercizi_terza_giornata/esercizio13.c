//intero N e stampa se è un numero primo
#include <stdio.h>
int main()
{
    long n;
    printf("Inserisci il numero: ");
    scanf("%ld", &n);
    for(long x = 2; x*x<n; x++){
        if(n % x == 0){
            printf("Il numero non è primo.\n");
            return 0;
        }
    }
    printf("Il numero è primo\n.");
    return 0;
}