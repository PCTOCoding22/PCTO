#include <stdio.h>

int main ()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y)
    {
        printf("x è maggiore ndi y\n");
    }
    else
    {
        printf("x NON è maggiore di y\n");
    }
    return 0;
}