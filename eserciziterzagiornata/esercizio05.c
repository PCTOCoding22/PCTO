#include <stdio.h>

int main() //inizio
{
    int z;
    int y;
    int x;
    printf("inserisci un numero z: ");
    scanf("%d",&z);
    printf("inserisci un numero y: ");
    scanf("%d",&y);
    printf("inserisci un numero x: ");
    scanf("%d",&x);

    if(z - y == y - x)
    {
        printf("sono in progressione aritmetica\n");
    } 

    else 
    {
        printf("non sono in progressione aritemtica\n");
    }
    
    return(0); //END

}