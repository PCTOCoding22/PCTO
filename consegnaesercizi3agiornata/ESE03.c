#include <stdio.h>

int main()
{
  int x;
  printf("inserisci un numero: ");
  scanf("%d", &x);
  int y;
  printf("inserisci un secondo numero: ");
  scanf("%d", &y);
  if (x%y)
  {
      printf("il primo numero non è un multiplo del secondo");
  }
  else
  {
      printf("il primo numero è multiplo del secondo");
  }
 return 0; 
}