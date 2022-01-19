#include <stdio.h>

int main() //inizio
{
    
int x;

scanf("%d",&x);
int count = x - 1;
while(count > 1)
{
    if(x % count != 0)
    {
        count --;
    }
    else
    {
        printf("il numero non è primo ");
        return (0);
    }

}    

printf("il numero è primo ");

      return(0); //END

}