#include <stdio.h>

int main()//start

{
    int x;
    int y;
    int z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(y-x==z-y)
    {
        printf("i tre numeri sono in successione aritmetica");
        
    }
    else 
    {
        printf("i tre numeri non sono in successione aritmetica");
    }

    
    return 0;
}