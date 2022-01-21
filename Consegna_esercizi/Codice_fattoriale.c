#include <stdio.h>


/* 6! = 6 fattoriale
6 fattoriale = 6 * 5 * 4 * 3 * 2 * 1
0! = 1
1! = 1
2! = 2 * 1 || 2 * 1!
3! = 3 * 2 * 1 || 3 * 2!
4! = 4 * 3 * 2 * 1 || 4 * 3!

*/


int recursive_factorial (int n)
{
  int res;
  
  if (n <= 1)
   {
     return 1;
      
     /*if(n == 0)
       {
         return 1;
       }
        if (n == 1)
       {
            return 1;
       }
     */
   } 
   res =   n * recursive_factorial (n - 1);
   return (res);
}

int interative_factorial (int n)
{
    int res;

    if (n <= 1)
    {
        return 1;
    }
    res = 1;
    for (int x = n; x > 1; x = x - 1)
    {
        res = res * x;
    }
    return (res);
}
int main()
{  
    int x = recursive_factorial || interative_factorial (8);
    printf ("risultato : %d\n", x);
    return (0);
}