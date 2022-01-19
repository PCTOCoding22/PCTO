#include <stdio.h>

int main()//start

{
    float x;
    float k;
    float f;


    scanf("%f", &x);

    if(x <= -273.15)
    {
        printf("error");
        return 0;
    }

    f = x * 1.8 + 32;
    k = x + 273.15;
    printf("in f %f", f);
    printf("in k %f", k);

    return 0;
    
}