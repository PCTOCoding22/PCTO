#include<stdio.h>
int main(){
    printf("inserisci tre numeri: \n");

    int numero1, numero2, numero3;
    scanf("%d", &numero1 );
    printf("-->");
    scanf("%d", &numero2 );
    printf("-->");
    scanf("%d", &numero3 );
    printf("-->");


    printf("\n\n\n");

    if(numero3 % numero2 == numero2 % numero1) {
    printf(" i numeri sono in progressione aritmetica");
    }
    else {
    printf("i numeri non sono in prograssione aritmetica");
    }

 return 0;


 
}