#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    printf("inserisci il primo numero:");
    scanf("%d", &x);
    printf("inserisci il primo numero:");
    scanf("%d", &y);
    printf("inserisci il primo numero:");
    scanf("%d", &z);
    if (x < 0 || y < 0 || z < 0){
        printf("ERROR");
        return 0;
    }
    if( x == y && y == z && z == x){
        printf("il triangolo è equilatero\n");
        return 0;
        
        
    }
    if( x == y || y == z || z == x ){
        printf("il triangolo è isoscele\n");
    }
    else{
        printf("il triangolo è scaleno\n");
    }
    
    
    return 0;
    }