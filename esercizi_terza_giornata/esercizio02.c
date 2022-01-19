#include <stdio.h>
int main ()
{
    int eta;
    printf("inserisci un età: ");
    scanf("%d", &eta);

if (eta >= 18) {
    printf("puoi prendere la patente\n");
}
else{
    printf("non puoi prendere la patente\n");
}

   return 0;

}
