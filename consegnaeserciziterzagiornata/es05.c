#include <stdio.h>
int main()
    {

int x;
printf("inserisci un numero: ");
scanf("%d", &x);

int y;
printf("inserisci secondo numero: ");

scanf("%d", &y);

int z;
printf("inserisci il terzo numero: ");

scanf("%d", &z);
if(y-x == z-y)
{

printf("è una progressione aritmetica");
}

else 
{
printf("non è una progressione aritmetica");
}
return 0;
}