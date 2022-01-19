#include <stdio.h>

int main() //start

{
    int x;
    scanf("%d", &x);
    if ((x%4==0 && x%100!=0) || x%400==0)

    {
        printf("l'anno è bisestile");
    }
    else 
    {
        printf("l'anno non è bisestile");
    }
    
    return 0;
}