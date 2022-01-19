//+-*/ 3 scanf
#include <stdio.h>
#include <stdlib.h>
int get_input(){
    int array[100];
    int x;
    for (x = 0; x<99; x++){
        float n;
        char o;
        scanf("%f", &n);
        array[x] = n;
        scanf("%c", &o);
        array[x+1] = o;
        if (o == '='){
            return (*array);
            }
        }
}
void calcolatrice(int *array){
    int n = array[0];
    printf("%d", n);
    for (int i = 1; i<=x; i+=2){
        printf("%d %c ", array[i], array[i+1]);
        switch (array[i]){
            case '+':
            n += array[i+1];
            break;
            case '-':
            n -= array[i+1];
            break;
            case '*':
            n *= array[n+1];
            break;
            case '/':
            n /= array[n+1];
            break;
            default:
            break;
        }
    }
    printf(" = %d", n);
}
int main(){
    int array[100];
    calcolatrice(get_input());
    return 0;
}
    