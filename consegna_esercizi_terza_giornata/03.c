#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Inserisci il primo numero:\n");
    scanf("%d", &x);
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &y);
        if(x % y == 0)
        {
            printf("Il primo numero è multiplo del secondo!");
        }
         else
         {
             printf("Il primo numero non è multiplo del secondo!");
             }
             return (0);
}