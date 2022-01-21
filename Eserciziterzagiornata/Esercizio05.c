#include <stdio.h>

int main (){

float x;
float y;
float z;

printf("Scrivi tre numeri\n");
scanf("%f", &x);
scanf("%f", &y);
scanf("%f", &z);

if (x-y == y-z)
{
  printf(" sono una successione aritmetica\n");

}

else 
{
 printf("\033[0;31mERRORE\n");
      return 0;
}
return 0;
}

