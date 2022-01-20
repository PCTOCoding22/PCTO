#include <stdio.h>

int main()
{
    
    int x;
    char operator;
    int y;
    char uguale;
    scanf("%d\n", &x);

    scanf("%c", &operator);

    scanf("%d", &y);

    scanf("%c\n", &uguale);

 if(operator=='+'){
     int res=x+y;
    printf("%d\n", res);

} else if(operator=='-'){
int res=x-y;
printf("%d\n", res);

} else if(operator==':'){

    if(x % y==0){
        int res = x/y;
        printf("%d\n", res);
    }else{
        float res = (float)x / (float) y;
        printf("%f\n", res);
    }

}else if(operator=='x'){
    int res= x*y;
    printf("%d\n", res);
     }
    
     return 0;



}