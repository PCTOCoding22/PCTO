#include <stdio.h>
int main()
{
    unsigned int N;
   
    printf("Inserisci un numero:  ");
    scanf("%d", &N);

    for (int c =2; c<N; c++ ){
        
    if(N % c == 0){
    printf("il numero %d NON è un numero primo\n",N);
    return (0);

     }

    }

    printf("il numero %d è un numero primo\n",N);
 
 
    return(0);

}