#include <stdio.h>
int main()
{
    for (int x = 1; x <= 12; x++){
        for (int y = x; y <= 12; y++){
            printf("%d %d\n", x, y);
        }
    }
    return 0;
    }