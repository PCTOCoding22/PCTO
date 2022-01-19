#include <stdio.h>

int main ()
{
    int x;
    int count = x - 1;
    printf ("scrivi un numero:  ");
    scanf ("%d", &x);

    while(count > 0)
    {
        if (x % count != 0)
        {
            count--;
        }
        else
        {
         printf ("il numero non è primo");
         return (0);
        }

    }
    printf ("il numero è primo");

    return (0);
}
