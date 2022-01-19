#include<stdio.h>

int main()
{
    int x;
    printf("scrivi un numero");
    scanf("%d", &x);
    int count = x - 1 ;
    while(count > 1)
    {
        if(x % count !=0){
        count --;   
    } 
    else
    {
        printf( "il numero non è primo\n");
       return 0;
    }
    
    }
   printf("il numero è primo\n");

   return 0;       
}