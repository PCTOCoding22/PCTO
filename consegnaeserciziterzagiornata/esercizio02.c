#include  <stdio.h>

int main() //inizio
{
    int eta;
    printf("inserisci un eta");
    scanf("%d", &eta);

if (eta >= 18)
{
    printf("puoi prendere la patente");
}
else
{
    printf("non puoi prendere la patente");
}
return 0; //end
}