#include <stdio.h>

int main()//start
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x % y == 0)
    {
        printf("x è multiplo di y");
    }
    else
    {
         printf("x non è multiplo di y");
    }

       
    return 0;
}