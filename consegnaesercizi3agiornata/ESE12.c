#include <stdio.h>

int main()
{
    int x;
    printf("scrivi numero");
    scanf("%d", &x);
    int count=x-1;
    while(count>1)
    {
        if(x%count!=0){
            count--;
       
        }
        else {
            printf("non è un numero primo");
            return 0;
        }

    }
printf("è un numero primo");

return 0;
}