#include <stdio.h>

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y)
    {
        printf("x è maggiore di y\n");
    }
    else
    {
        printf("x non è maggiore di y/n");
    }
    
    return 0;

}