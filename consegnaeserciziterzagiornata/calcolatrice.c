#include <stdio.h>

int main()//start
{
    int z;
    printf("inserisci un numero z: ");
    scanf("\n%d", &z);
    char x;
    printf("inserisci un carattere: ");
    scanf("\n%c", &x);
    int y;
    printf("inserisci un numero y: ");
    scanf("%d", &y);
    char res;
    scanf("\n%c", &res);
    int risultato;

    if (x=='+')
    {
        risultato=z+y;
        printf("%d\n", risultato);
    }
    
    else if(x=='-')
    {
        risultato=z-y;
        printf("%d\n", risultato);
    }

     else if(y==0 && x=='/')
    {
        printf("accirt");
    }
    
    else if(x=='/')
    {
        risultato=z/y;
        printf("%d\n", risultato);
    }

    else if(x=='*')
    {
        risultato=z*y;
        printf("%d\n", risultato);
    }

    else if(y==0 && x=='/')
    {
        printf("indefinito");
    }
    
     return 0;

}
//carta, santomauro, de maria, manfreda