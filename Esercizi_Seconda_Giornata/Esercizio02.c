#include <stdio.h>

int main()
{
    for (int x = 1; x <= 12; x = x + 1)
    { 
        for (int y = x; y <= 12; y = y + 1)
        {
            printf("x:%d y:%d\n", x, y);

        }

    }

    return (0);

}   