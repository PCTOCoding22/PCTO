#include <stdio.h>
int main()
{
    int cipolle;
    printf("Quante cipolle vuoi comprare? ");
    scanf("%d", &cipolle);
    float prezzo = cipolle*5;
    if (cipolle >= 30 && cipolle < 50){
        prezzo = prezzo*0.9;
    }
    else if (cipolle >= 50){
        prezzo = prezzo*0.85;
    }
    printf("Il prezzo è %.2f euro\n", prezzo);
    return 0;
}