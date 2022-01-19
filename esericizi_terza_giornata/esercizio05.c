#include <stdio.h>

int main()
{
  printf("Inserisci tre fottuti numeri :D\n\n");

  printf("---->");

  int numero1;
  int numero2;
  int numero3;

  scanf("%d", &numero1);
  printf("---->");
  scanf("%d", &numero2);
  printf("---->");
  scanf("%d", &numero3);
  
  printf("\n\n\n");

  if( numero3 % numero2 == numero2 % numero1 )
  {
      printf("Sono in progressione aritmetica!\n");
  }
  else
  {
      printf("Non sono in progressione aritmetica!\n");
  }














}