#include <stdio.h>
/*
0! = 1
1! = 1
2! = 2 * 1 = 2
3! = 3 * 2! = 6
4! = 4 * 3! = 24
*/

int recursive_factorial (int n, int p)
{
    int res;
    if (n <= 1) {
        return 1;
    }
    res = n * recursive_factorial(n-1);
    return res;
}

int iterative_factorial(int n, int p)
{
    int res;
    if (n <= 1) {
        return 1;
}
res = 1;
for (int x = n; x > 1; x = x - 1)
{
    res = res * x; 
}

return res;
}

int main ()
{
    int x = iterative_factorial (4);
    printf("risultato: %d\n", x);

    return 0;
}