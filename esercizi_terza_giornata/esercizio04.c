#include<stdio.h>
int main (){
  int temperatura_in_celsius, temperatura_faherenheit, temperatura_kelvin, x;
  printf("inserisci temperatura in celsius: ");
  scanf("%d", &x);
  temperatura_faherenheit= (1.8 * x + 32);
  temperatura_kelvin = (x + 273.15);

  if (x <= -273.15){
      printf("errore");
  }
  else{
      printf("conversione temperatura in fahrenheit: %d\n", temperatura_faherenheit);
      printf("conversione temperatura in Kelvin: %d\n", temperatura_kelvin);
  }
  return 0;
}
