#include <stdio.h>

int main(){
    int x;
    printf("inserire un numero:");
    scanf("%d", &x);

    for( int y = 2 ; y < x ; y++){
        if(x%y == 0){
            printf("il numero non è primo\n");
            return 0;
        }   
    }
    printf("il numero non è primo\n");
    return 0;
}