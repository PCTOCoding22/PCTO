#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    printf("inserisci il primo numero:");
    scanf("%d", &x);
    printf("inserisci il secondo numero:");
    scanf("%d", &y);
    printf("inserisci il terzo numero:");
    scanf("%d", &z);
    
    if(y - x == z - y ){
        printf("sono in successione\n");

    }
    else{
        printf("non sono in successione:(\n");
    }
    return 0;

}