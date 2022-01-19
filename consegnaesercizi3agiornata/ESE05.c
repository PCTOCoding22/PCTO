#include <stdio.h>

int main()
{
    int x;
    printf("inserire primo numero: ");
    scanf("%d", &x);
    int y;
    printf("inserire secondo numero: ");
    scanf("%d", &y);
    int z;
    printf("inserire terzo numero: ");
    scanf("%d", &z);
    if (y-x==z-y)
    {
        printf("è una progressione aritmetica");
    }
    else
    {
        printf("non è una progressione aritmetica");
    }
return 0;

}