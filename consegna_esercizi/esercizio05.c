#include <stdio.h>
int main()
{
    int x, y, z;
   
 printf("Inserisci tre numeri: ");
    scanf("%d  %d  %d", &x, &y, &z);
  
    int k = x - y;
    int q = y - z;


    if(k != q){
    printf("i tre numeri inseriti NON sono una progressione aritmetica\n");
    }
    else{
    printf("i tre numeri sono una progressione aritmetica\n");
    }

    return(0);

}