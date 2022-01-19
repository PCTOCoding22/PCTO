#include <stdio.h>

int main()//start

{
    int etapatente;
    int eta;
    scanf("%d", &etapatente);
    scanf("%d", &eta);
    if(eta >= etapatente)
    {
        printf("puoi prendere la patente\n");
    }
    else
    {
        printf("non puoi prendere la patente\n");
    }
    return 0;
}