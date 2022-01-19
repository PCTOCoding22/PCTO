#include <stdio.h>
int main()
{
    float x;
    float y;
    float z;
    float differenza_1;
    float differenza_2;
    printf("digita il tuo primo numero:\n");
    scanf("%f", &x);
    printf("digita il tuo secondo numero: \n");
    scanf("%f", &y);
    printf("digita il tuo terzo numero: \n");
    scanf("%f", &z);
    differenza_1 = x - y;
    differenza_2 = y - z;
    if(differenza_1 = differenza_2)
    {
        printf("i tuoi numeri sono in progressione aritmetica!\n");
    }
    else
    {
        printf("i tuoi numeri non sono in progressione aritmetica!\n");
    }
    return(0);
}