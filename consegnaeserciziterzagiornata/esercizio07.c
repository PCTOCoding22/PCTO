#include <stdio.h>

int main(){
    int x;
    int y;
    int z; 
    printf("inserisci il primo dato:");
    scanf("%d", &x);
    printf("inserisci il secondo dato:");
    scanf("%d", &y);
    printf("inserisci il terzo dato:");
    scanf("%d", &z);
    if (x < 0 || y < 0 || z < 0){
        printf("ERROR");
        return 0;
    }
    if( x + y > z || y + z > x || x + z > y ){
        printf("è un triangolo\n");
    }
    else{
        printf("non è un triangolo\n");
    }
    return 0;
}