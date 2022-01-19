#include <stdio.h>

int main (){

int x;
int y;
int z;

printf("Scrivi tre numeri\n");
scanf("%f", &x);
scanf("%f", &y);
scanf("%f", &z);

if (x-y == y-z == z-x)
{
  printf(" %f , %f , %f sono una successione aritmetica",x y z);

}
return 0;
}

