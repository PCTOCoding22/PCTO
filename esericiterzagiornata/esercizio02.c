#include <stdio.h>

int main() //inizio
{
    int x;
    int y;
    printf("inserisci a che età puoi guidare nel tuo paese: ");
    scanf("%d",&x);
    printf("quanti anni hai: ");
    scanf("%d",&y);


    if(y >= x)
    {
        printf("puoi guidare\n");
    }
    else
    {
        printf("non puoi guidare\n");

    }



    return(0); //END

}





