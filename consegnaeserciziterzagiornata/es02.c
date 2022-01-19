#include <stdio.h>
 int main()
 {
int x; 
printf("inserisci l'età maggiore nel tuo stato:");
scanf("%d", &x);
int y;
printf("inserisci età:");
scanf("%d", &y);

 if (y >= x)
 {
 printf("y puo prendere la patente");
} 
else 
{
printf("y non puo prendere la patente");
}
return 0;
 }