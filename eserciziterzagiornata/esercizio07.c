#include <stdio.h>

int main() //inizio
{
    
int a;
int b; 
int c;
printf("inserisci una lunghezza a: ");
scanf("%d",&a);
printf("inserisci una lunghezza b: ");
scanf("%d",&b);
printf("inserisci una lunghezza c: ");
scanf("%d",&c);

if(a + b > c || b + c > a || a + c > b)
{
    printf("è un triangolo\n");
}

else
{
    printf("non è un triangolo\n");
}



      return(0); //END

}