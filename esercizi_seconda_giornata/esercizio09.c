#include <stdio.h>
int main()
{
    int birth;
    printf("Inserisci l'anno di nascita: ");
    scanf("%d", &birth);
    if (birth > 1969){
        printf("Sei nato %d anni dopo.\n", birth - 1969);
    }
    else if (birth < 1969){
        printf("Sei nato %d anni prima.\n", 1969 - birth);
    }
    else{
        printf("Sei nato lo stesso anno.\n");
    }
    return 0;
    }